bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
        
        bool found = false;
        for(int j = 0; j < i; j++){
            if(lst[j] == lst[i]) {
                found = true;
                break;
            }
        }
        
        if(!found) return false;
    }
    
    return true;
}