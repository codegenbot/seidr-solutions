int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or equivalent in C++ which is NULL
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto i = sorted.begin(); ++i != sorted.end(); ) {
        if (*i > lst[0]) return *i; // Return the 2nd smallest element
    }
    return -1; // Return None or equivalent in C++ which is NULL
}