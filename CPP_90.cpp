Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in Python
    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] < lst[i + 1]) {
            return lst[i];
        }
    }
    return -1; // None in Python
}