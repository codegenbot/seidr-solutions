int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    auto it = prev(end(copy));
    if (distance(it, end(copy)) > 1)
        return *it;
    else
        return -1; // Return None
}