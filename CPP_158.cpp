string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string s : words) {
        set<char> unique_chars(s.begin(), s.end());
        if (unique_chars.size() > result.length()) {
            result = s;
        } else if (unique_chars.size() == result.length()
                   && result < s) {
            result = s;
        }
    }
    return result;
}