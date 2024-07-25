int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto it = sorted.begin(); ++it != sorted.end(); ) {
        if (*it > sorted[0]) {
            return *it;
        }
    }
    return -1; // Return None
}