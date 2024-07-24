int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None
    vector<int>::iterator it = min_element(lst.begin(), lst.end());
    vector<int>::iterator it2 = find(it, lst.end(), *it);
    if (it2 == lst.end()) return *it; // Return the smallest element as there is no second smallest
    return *(it2 + 1); 
}