int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int maxFreqNum = -1;
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            maxFreqNum = pair.first;
            break;
        }
    }
    return maxFreqNum;
}