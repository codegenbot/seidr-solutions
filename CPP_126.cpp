bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) {
        return true;
    }
    
    int prev = lst[0];
    bool hasDuplicate = false;
    
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= prev) {
            return false;
        }
        
        if (lst[i] == lst[i-1]) {
            if (hasDuplicate) {
                return false;
            }
            hasDuplicate = true;
        } else {
            hasDuplicate = false;
        }
        
        prev = lst[i];
    }
    
    return true;
}