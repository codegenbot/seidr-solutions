string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        if (word.length() >= result.length() && unique(word.begin(), word.end()).size() > unique(result.begin(), result.end()).size()) {
            result = word;
        }
    }
    return result;
}