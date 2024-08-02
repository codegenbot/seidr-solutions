int search(vector<int> lst) {
    unordered_map<int, int> freqMap;
    for (int num : lst) {
        freqMap[num]++;
    }
    for (auto& pair : freqMap) {
        if (pair.second >= pair.first && pair.first > 0) {
            return pair.first;
        }
    }
    return -1;
}