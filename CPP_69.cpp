int search(vector<int> lst) {
    int maxNum = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->first > it->second && it->second >= maxNum) {
            maxNum = it->first;
        }
    }
    
    return maxNum;
}