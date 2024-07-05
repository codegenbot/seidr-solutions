bool is_sorted(vector<int> lst){
    if(lst.size() < 2) return true;
    for(size_t i = 1; i < lst.size(); ++i) {
        if(lst[i] < lst[i-1]) return false;
    }
    vector<int> freq(1001, 0);
    for(int num : lst) {
        if(++freq[num] > 2) return false;
    }
    return true;
}