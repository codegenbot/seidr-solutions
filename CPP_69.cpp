int search(vector<int> lst){
    map<int,int> freqMap;
    for(int num : lst) {
        if(freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int result = -1;
    for(auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if(it->second >= it->first && it->first > 0) {
            result = it->first;
            break;
        }
    }
    return result;
}