int next_smallest(vector<int> lst){
    // If the size of the vector is less than 2, return None
    if(lst.size() < 2){
        return None;
    }
    
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Return the second element of the sorted vector
    return lst[1];
}