int next_smallest(vector<int> lst){
    vector<int> lst_copy = lst;
    sort(lst_copy.begin(), lst_copy.end());
    
    if (lst_copy.size() < 2) {
        return -1; 
    }
    
    return lst_copy[1];
}