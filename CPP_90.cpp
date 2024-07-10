int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value that signifies None
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it == sorted.end()) return -1; // or any other value that signifies None
    
    return *it;
}