map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test;
    for (char c : unique(str.begin(), str.end())) {
        int count = 0;
        size_t pos = 0;
        while ((pos = str.find(c, pos)) != string::npos) {
            count++;
            pos++;
        }
        if (count > 0) result[c] = count;
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