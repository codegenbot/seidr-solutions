string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > result.length()) {
            result = word;
        } else if (unique_chars.size() == result.length() && word < result) {
            result = word;
        }
    }
    return result;
}