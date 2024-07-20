int search(vector<int> lst) {
    int result = -1;
    unordered_map<int, int> freqMap;
    
    for (int num : lst) {
        freqMap[num]++;
    }
    
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > result) {
            result = pair.first;
        }
    }
    
    return result;
}