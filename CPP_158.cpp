string find_max(vector<string> words) {
    string result;
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        string unique_chars;
        for (char ch : word) {
            if (unique_chars.find(ch) == string::npos) {
                unique_chars.push_back(ch);
            }
        }
        
        if (unique_chars.size() > max_unique_chars || 
            (unique_chars.size() == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars.size();
            result = word;
        }
    }
    
    return result;
}