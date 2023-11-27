bool is_sorted(vector<int> lst){
    int n = lst.size();
    
    // Check if vector has more than 1 duplicate of the same number
    for(int i=0; i<n-1; i++){
        if(lst[i] == lst[i+1]){
            return false;
        }
    }
    
    // Check if vector is sorted in ascending order
    for(int i=0; i<n-1; i++){
        if(lst[i] > lst[i+1]){
            return false;
        }
    }
    
    return true;
}