int search(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }
    int maxVal = -1; 
    for(auto p:freqMap){ 
        if(p.second>=p.first&&p.first>0)
        { 
            if(maxVal < p.second)
                maxVal=p.second;
        } 
    } 
    return maxVal;
}