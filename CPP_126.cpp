bool is_sorted(vector<int> lst){
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Check if there are any duplicates
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == lst[i-1]) {
            return false;
        }
    }
    
    // Check if the vector is sorted in ascending order
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] < lst[i-1]) {
            return false;
        }
    }
    
    return true;
}