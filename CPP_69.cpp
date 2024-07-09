int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        freqMap[num]++;
    }
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;
}