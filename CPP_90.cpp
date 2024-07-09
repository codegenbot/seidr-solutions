int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    auto it = prev(end(sorted_lst), 1);
    if (*it == *begin(sorted_lst)) return -1; // Return None
    return *it;
}