int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size(); i++) {
        if (i == 0 || copy[i] != copy[i-1]) {
            if (copy[i] != lst[0] && i + 1 < copy.size()) {
                return copy[i];
            }
        }
    }
    return -1; // Return None
}