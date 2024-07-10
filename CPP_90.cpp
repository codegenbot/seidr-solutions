Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;  // Return None in C++ terms
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto it = sorted.begin(); ++it != sorted.end(); ) {
        if (*it != *prev(it)) return *it;
    }
    return -1;  // Return None in C++ terms
}