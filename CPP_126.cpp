bool is_sorted(vector<int> lst){
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Check if there are any duplicates in the vector
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] == lst[i+1]) {
            return false;
        }
    }
    
    // Check if the sorted vector is equal to the original vector
    return lst == original_lst;
}