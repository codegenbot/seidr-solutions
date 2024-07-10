Here is the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true; // single element or empty vector is sorted
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]) return false; // found descending sequence
    }
    auto uniqueEnd = unique(lst.begin(), lst.end());
    return (uniqueEnd == lst.end()); // check if there are no duplicates
}