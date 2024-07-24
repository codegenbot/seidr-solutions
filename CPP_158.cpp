string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    unordered_map<char, int> char_count;
    for (char c : max_word) {
        char_count[c]++;
    }
    
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                unordered_map<char, int> a_count, b_count;
                for (char c : a) {
                    a_count[c]++;
                }
                for (char c : b) {
                    b_count[c]++;
                }
                return (a_count.size() > b_count.size());
            }
            return a.length() < b.length();
        });
    
    return result;
}