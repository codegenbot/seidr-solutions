int findNextSmallest(vector<int> lst) {
    vector<int> sorted(lst.begin(), lst.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}