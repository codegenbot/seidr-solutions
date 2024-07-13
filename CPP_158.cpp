Here is the completed code:

string find_max(vector<string> words) {
    string result;
    int max_unique = 0;
    
    for (const auto& word : words) {
        int unique_count = 0;
        set<char> seen;
        
        for (char c : word) {
            if (seen.insert(c).second) {
                unique_count++;
            }
        }
        
        if (unique_count > max_unique || (!result.empty() && unique_count == max_unique)) {
            result = word;
            max_unique = unique_count;
        }
    }
    
    return result;
}