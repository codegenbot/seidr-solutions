map<char, int> histogram(string test){
    map<char, int> countMap;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            countMap[c]++;
        }
    }
    
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}