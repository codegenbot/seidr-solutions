Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true;
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            if(lst.size() > 1) return false;
        }
    }
    return true;
}