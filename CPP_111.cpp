map<char, int> histogram(string test) {
    map<char, int> result;
    string letters = test;
    for (char c : letters) {
        if (c != ' ') {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
        }
    }
    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxCountMap.clear();
            maxCountMap[it->first] = it->second;
        } else if (it->second == maxCount) {
            maxCountMap[it->first] = it->second;
        }
    }
    return maxCountMap;
}