int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int maxFreq = -1;
    for (auto p : freqMap) {
        if (p.second >= p.first && p.second > maxFreq) {
            maxFreq = p.second;
        }
    }
    return maxFreq == 0 ? -1 : maxFreq;
}