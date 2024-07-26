map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;
    int maxCount = 0;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }
    
    for (const auto &entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}