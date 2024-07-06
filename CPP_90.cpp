Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in C++ equivalent to -1
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it == sorted.end() || it == sorted.begin()) return -1; // None
    return *prev(it);
}