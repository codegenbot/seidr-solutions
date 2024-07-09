int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // returning None equivalent value
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    auto it = prev(lower_bound(copy.begin(), copy.end(), copy[1]));
    return *it == copy[0] ? -1 : *it; // returning None equivalent value if all elements are the same
}