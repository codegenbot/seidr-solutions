string anti_shuffle(const string& s) {
    string result = "";
    int start = 0;
    for (size_t i = 0; i <= s.length(); ++i) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word + (i == s.length() ? "" : " ");
            start = i + 1;
        }
    }
    return result;
}