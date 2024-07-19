Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in Python
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int count = 0;
    for (auto i = sorted.begin(); i != sorted.end(); ++i) {
        if (*i > *next(i)) {
            return *i;
        }
        ++count;
    }
    return -1; // None in Python
}