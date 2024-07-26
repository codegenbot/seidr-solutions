string ordered_word = s;
    int start = 0;
    int end = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ' || i == s.length() - 1) {
            if (i == s.length() - 1) {
                end = i;
            } else {
                end = i - 1;
            }
            string word = s.substr(start, end - start + 1);
            sort(word.begin(), word.end());
            for (int j = 0; j < word.length(); ++j) {
                ordered_word[start + j] = word[j];
            }
            start = i + 1;
        }
    }
    return ordered_word;
}