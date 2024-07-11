bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i] && count(lst.begin(), lst.end(), lst[i]) > 1)
            return false;
    }
    return true;
}