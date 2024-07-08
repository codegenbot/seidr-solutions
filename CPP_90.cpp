int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // None in C++ is represented as 0 or -1, depending on the context.
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return -1;
}