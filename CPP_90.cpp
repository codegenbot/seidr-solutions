int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None for C++11 and later
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int first_smallest = copy[0];
    auto it = upper_bound(copy.begin(), copy.end(), first_smallest);
    if (it == copy.end()) return -1; // None for C++11 and later
    return *it;
}