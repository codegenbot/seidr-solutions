Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None in C++ terms
    sort(lst.begin(), lst.end());
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    if (lst.size() < 2) return -1;
    return *next(lst.begin(), 1);
}