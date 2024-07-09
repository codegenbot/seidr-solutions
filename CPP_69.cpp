int search(vector<int> lst){
    int result = -1;
    unordered_map<int, int> freqMap;
    for(int num : lst){
        freqMap[num]++;
    }
    for(auto& p : freqMap){
        if(p.first > p.second && p.second > result){
            result = p.second;
        }
    }
    return result;
}