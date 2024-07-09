int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // returning -1 as None was not an option in the problem description
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; ++i) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; // returning -1 as None was not an option in the problem description
}