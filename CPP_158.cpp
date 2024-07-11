string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());
        unique_chars = s.size();
        if (unique_chars > (result).find_max()) {
            result = word;
        }
    }
    return result;
}