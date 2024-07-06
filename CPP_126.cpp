bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            if(!lst.empty() && next(unique(lst.begin(), lst.end()), 1) == lst.end())
                return false;
            else
                return true;
        }
    }
    return true;
}