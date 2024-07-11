bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            if(next_permutation(lst.begin(), lst.end())){
                return false;
            } else {
                return true;
            }
        }
    }
    return true;
}