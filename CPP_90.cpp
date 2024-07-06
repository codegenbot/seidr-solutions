int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted(lst.begin(), lst.end());
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}