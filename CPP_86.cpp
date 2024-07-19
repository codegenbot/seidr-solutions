string ordered = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            ordered += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    ordered += word;
    return ordered;
}