int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value to indicate None
    vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return -1; // or any other value to indicate None
}