int search(vector<int> lst) {
    int maxFreqNum = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->first == it->second && it->first > maxFreqNum) {
            maxFreqNum = it->first;
        }
    }
    
    return maxFreqNum;
}