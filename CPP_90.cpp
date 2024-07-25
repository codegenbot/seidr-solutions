int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in Python equivalent
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int secondSmallest = -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            secondSmallest = sorted[i + 1];
            break;
        }
    }
    return secondSmallest;
}