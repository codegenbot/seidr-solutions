string result = "";
    int start = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word;
            if (i < s.size()) {
                result += ' ';
            }
            start = i + 1;
        }
    }
    return result;
}