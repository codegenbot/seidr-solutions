string ordered_word = "";
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            ordered_word += word;
            if (i < s.size()) {
                ordered_word += ' ';
            }
            start = i + 1;
        }
    }
    return ordered_word;
}