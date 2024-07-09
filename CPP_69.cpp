int search(vector<int> lst){
    map<int, int> freq;
    for(int i = 0; i < lst.size(); i++){
        if(freq.find(lst[i]) != freq.end()){
            freq[lst[i]]++;
        } else {
            freq[lst[i]] = 1;
        }
    }
    int max = -1;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->second >= it->first && it->first > 0){
            max = it->first;
            break;
        }
    }
    return max;
}