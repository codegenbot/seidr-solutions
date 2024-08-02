int search(vector<int> lst){
    map<int, int> freqMap;
    for(int num : lst) {
        if(freqMap.find(num) != freqMap.end()) {
            freqMap[num]++;
        } else {
            freqMap[num] = 1;
        }
    }
    for(auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if(it->second >= it->first) {
            return it->first;
        }
    }
    return -1;
}