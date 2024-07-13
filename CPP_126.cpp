Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < lst[i-1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}