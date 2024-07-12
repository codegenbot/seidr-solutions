string find_max(vector<string> words){
    string max_str = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (auto &str : words) {
        if (str.length() > max_str.length() || 
            (str.length() == max_str.length() && str < max_str)) {
            max_str = str;
        }
    }
    
    return max_str;
}