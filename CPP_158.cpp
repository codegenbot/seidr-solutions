string find_max(vector<string> words) {
    string result = "";
    int max_unique = 0;
    
    for (const auto& word : words) {
        int unique_count = 0;
        set<char> chars(word.begin(), word.end());
        
        if (chars.size() > max_unique) {
            max_unique = chars.size();
            result = word;
        } else if (chars.size() == max_unique && word < result) {
            result = word;
        }
    }
    
    return result;
}