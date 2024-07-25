Here is the solution:

vector<int> next_smallest(vector<int> lst) {
    if (lst.empty()) return vector<int>(); // empty vector
    sort(lst.begin(), lst.end());
    auto it = prev(end(lst), 1);
    if (*it == *(end(lst) - 1)) return vector<int>(); // all elements equal
    return vector<int>({*it});
}