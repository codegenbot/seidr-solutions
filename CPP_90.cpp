int next_smallest(vector<vector<int>> lst) {
    if (lst.size() < 2)
        return -1; 
    vector<int> sorted = lst[0];
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0])
            return sorted[i];
    }
    return -1;
}