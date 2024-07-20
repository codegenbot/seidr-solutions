int next_smallest(vector<int> lst){
    if (lst.size() < 2) return -1; // None for cpp contest
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    int idx = distance(sorted.begin(), find(sorted.begin(), sorted.end(), *max_element(sorted.begin(), sorted.end())));
    if(idx >= sorted.size()-2 || idx < 0) return -1; // None for cpp contest
    
    return *next(cbegin(sorted), cend(sorted) - 2);
}