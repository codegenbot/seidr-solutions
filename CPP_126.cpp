bool is_sorted(vector<int> lst){
    int n = lst.size();
    bool hasDuplicate = false;
    
    for(int i = 0; i < n-1; i++){
        if(lst[i] > lst[i+1]){
            return false;
        }
        if(lst[i] == lst[i+1]){
            if(hasDuplicate){
                return false;
            }
            hasDuplicate = true;
        }
    }
    
    return true;
}