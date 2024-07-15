string new_word = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            new_word += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    new_word += word;
    return new_word;
}