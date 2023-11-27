bool is_sorted(vector<int> lst){
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Check if there are more than 1 duplicate of the same number
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            return false;
        }
    }
    
    // Check if the vector is sorted in ascending order
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] > lst[i+1]){
            return false;
        }
    }
    
    return true;
}