int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None is represented by -1
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it == sorted.end()) return -1; // No second smallest element
    return *it;
}