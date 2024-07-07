int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in C++ sense is often represented as -1
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    auto it = prev(unique(sorted).begin());
    if (distance(sorted.begin(), it) < 2) return -1; // No second smallest element
    return *(prev(it));
}