map<char,int> hist;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
        for (char c : word) {
            hist[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto& entry : hist) {
        max_count = max(max_count, entry.second);
    }
    
    map<char,int> result;
    for (const auto& entry : hist) {
        if (entry.second == max_count) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}