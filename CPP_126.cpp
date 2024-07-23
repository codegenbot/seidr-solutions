Here is the solution:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst.size() == 1 || (lst[0] < lst[1]);
}