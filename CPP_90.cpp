Here is the completed function:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or equivalent
    auto it = prev(range_finder(lst));
    return *it;
}

vector<int>::iterator range_finder(const vector<int>& v) {
    auto it = v.begin();
    advance(it, 1);
    return it;
}