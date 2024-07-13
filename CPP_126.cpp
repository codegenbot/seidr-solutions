Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) return false;
    }
    bool has_duplicates = unique(lst.begin(), lst.end()) - lst.begin() != lst.size();
    return !has_duplicates && is_sorted(lst);
}