string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    
    int max_unique_chars = 0;
    for (char c : max_word) {
        bool found = false;
        for (int i = 0; i < max_word.size(); ++i) {
            if (max_word[i] == c) {
                found = true;
                break;
            }
        }
        if (!found) {
            return "";
        }
    }
    
    return max_word;
}