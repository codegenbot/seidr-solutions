Here is the completed function:

vector<int> next_smallest(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();
    sort(lst.begin(), lst.end());
    auto it = prev(lst.begin(), 1);
    return vector<int>(it + 1, lst.end());
}