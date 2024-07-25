Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> v(lst);
    sort(v.begin(), v.end());
    for (auto i = v.begin(); ++i != v.end(); ) {
        if (*i > lst[0]) return *prev(i); // Return the 2nd smallest element
    }
    return -1; // Return None
}