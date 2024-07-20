int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    sort(lst.begin(), lst.end());
    auto it = lower_bound(lst.begin(), lst.end(), lst[0]);
    return *it == lst.back() ? -1 : *(it + 1);
}