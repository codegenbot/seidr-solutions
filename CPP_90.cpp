Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return 0; // None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return 0; // None
}