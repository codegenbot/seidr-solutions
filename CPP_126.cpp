bool is_sorted(vector<int> lst){
    if(lst.size() < 2) return true;
    
    int prev = lst[0];
    bool hasDuplicates = false;
    
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] == prev){
            hasDuplicates = true;
            break;
        }
        else if(lst[i] < prev){
            return false;
        }
        prev = lst[i];
    }
    
    return !hasDuplicates;
}