bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) {
        return true;
    }
    
    int prev_num = lst[0];
    int duplicate_count = 0;
    
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < prev_num) {
            return false;
        }
        
        if(lst[i] == prev_num) {
            duplicate_count++;
        }
        
        if(duplicate_count > 1) {
            return false;
        }
        
        prev_num = lst[i];
    }
    
    return true;
}