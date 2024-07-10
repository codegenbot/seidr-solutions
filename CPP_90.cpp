int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 for simplicity
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it == sorted.end()) return -1;
    
    return *it;
}