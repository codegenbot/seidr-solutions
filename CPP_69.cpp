int search(vector<int> lst) {
    int maxVal = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > maxVal) {
            maxVal = it->first;
        }
    }
    
    return maxVal;
}