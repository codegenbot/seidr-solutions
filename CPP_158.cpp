string find_max(vector<string> words) {
    string result;
    int maxUnique = 0;
    
    for (const string& word : words) {
        int unique = set<char>(word.begin(), word.end()).size();
        if (unique > maxUnique || (unique == maxUnique && word < result)) {
            maxUnique = unique;
            result = word;
        }
    }
    
    return result;
}