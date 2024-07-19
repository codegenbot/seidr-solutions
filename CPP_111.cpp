map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> countMap;
    
    for (char c : test) {
        if (c != ' ') {
            countMap[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : countMap) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto& pair : countMap) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}