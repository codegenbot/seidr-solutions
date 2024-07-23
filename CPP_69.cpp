int search(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int maxFreq = 0;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first) {
            maxFreq = it->first;
        }
    }
    return maxFreq;
}