bool is_sorted(vector<int> lst){
    int n = lst.size();
    if(n <= 1){
        return true;
    }
    
    int prev = lst[0];
    int duplicates = 0;
    
    for(int i = 1; i < n; i++){
        if(lst[i] < prev){
            return false;
        }
        
        if(lst[i] == prev){
            duplicates++;
            if(duplicates > 1){
                return false;
            }
        } else {
            duplicates = 0;
        }
        
        prev = lst[i];
    }
    
    return true;
}