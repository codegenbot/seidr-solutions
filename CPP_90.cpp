int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None is equivalent to -1 in C++.
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size() - 1; i++) {
        if (copy[i] != copy[i+1]) {
            return copy[i+1];
        }
    }
    return -1; // If all elements are the same, return -1.
}