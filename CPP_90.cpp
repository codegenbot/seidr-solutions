Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or any other value that represents "None"
    vector<int>::iterator it = min_element(lst.begin(), lst.end());
    if (next(it, 1) == lst.end()) return *it;
    return *(next(it, 1));
}