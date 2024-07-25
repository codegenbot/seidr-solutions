bool is_sorted(vector<int> lst){
    for(int i = 0; i < (lst.size() - 1); i++){
        if(lst[i] >= lst[i+1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            if(i > 0 && count(lst.begin(), lst.end(), lst[i-1]) > 1){
                return false;
            }
            return true;
        }
    }
    return true;
}