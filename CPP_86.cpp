string ordered_word = s;
    string result = "";
    int start = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ' || i == s.size() - 1) {
            if (i == s.size() - 1) {
                ++i;
            }
            string word = ordered_word.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word;
            if (i != s.size()) {
                result += ' ';
            }
            start = i + 1;
        }
    }
    return result;
}