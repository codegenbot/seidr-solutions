int search(vector<int> lst){
    map<int, int> freqMap;
    for(int num : lst) {
        if(freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    for(auto p : freqMap) {
        if(p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}