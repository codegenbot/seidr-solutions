bool is_sorted(vector<int> lst){
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1)
            return false;
    }
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}