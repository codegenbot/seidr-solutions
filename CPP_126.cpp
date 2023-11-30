bool is_sorted(vector<int> lst){
    int n = lst.size();
    
    // Check if vector has more than 1 duplicate of the same number
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(lst[i] == lst[j]){
                count++;
                if(count > 1){
                    return false;
                }
            }
        }
    }
    
    // Check if vector is sorted in ascending order
    for(int i = 1; i < n; i++){
        if(lst[i] < lst[i-1]){
            return false;
        }
    }
    
    return true;
}