int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None, in C++ this is equivalent to -1
    sort(lst.begin(), lst.end()); 
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    
    if (lst.size() < 2) return -1;
    return *(next(lst.begin(), 1));
}