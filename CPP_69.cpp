Here is the solution:

int search(vector<int> lst){
    map<int, int> freqMap;
    for(int i = 0; i < lst.size(); i++){
        if(freqMap.find(lst[i]) == freqMap.end())
            freqMap[lst[i]] = 1;
        else
            freqMap[lst[i]]++;
    }
    for(map<int, int>::iterator it = freqMap.begin(); it != freqMap.end(); ++it){
        if(it->second >= it->first)
            return it->first;
    }
    return -1;