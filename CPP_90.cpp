int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None means returning -1 here
    vector<int> v(lst);
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    it--; // Point to the last duplicate element
    if (v.size() > 2) {
        for (int i = 0; i < lst.size(); ++i) {
            if (lst[i] == *it) {
                for (int j = i + 1; j < lst.size(); ++j) {
                    if (lst[j] < *it) return lst[j];
                }
                return -1;
            }
        }
    }
    return -1; // Return None means returning -1 here
}