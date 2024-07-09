vector<string> words_string(string s) {
    vector<string> result;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || (s[i] == ',' && (i == 1 || s[i - 1] != '\\')) || (s[i] == ' ' && (i == start || s[i - 1] != '\\'))) {
            result.push_back(s.substr(start, i - start));
            start = i;
        }
    }
    return result;
}