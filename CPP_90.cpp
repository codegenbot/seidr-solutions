int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in Python
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    auto it = prev(end(sorted_lst));
    if (distance(sorted_lst.begin(), it) > 1) return *it;
    else return -1; // None in Python
}