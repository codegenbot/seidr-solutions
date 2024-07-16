int search(vector<int> lst) {
    int result = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > result) {
            result = it->first;
        }
    }
    
    return result;
}