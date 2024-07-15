string ordered_str = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            ordered_str += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        sort(word.begin(), word.end());
        ordered_str += word;
    }
    return ordered_str;
}