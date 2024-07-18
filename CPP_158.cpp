string find_max(vector<string> words) {
    string result;
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars;
            result = word;
        }
    }
    
    return result;
}