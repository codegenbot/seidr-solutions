map<char, int> histogram(string test) {
    map<char, int> countMap;
    for (char c : test) {
        if (c != ' ') {
            countMap[c]++;
        }
    }
    int maxCount = 0;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }
    map<char, int> result;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}