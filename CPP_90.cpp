Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 for simplicity
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int secondSmallest = -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return secondSmallest;
}