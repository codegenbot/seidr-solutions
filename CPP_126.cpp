bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    vector<int> count(lst.begin(), lst.end());
    sort(count.begin(), count.end());
    int maxCount = 1;
    for (int i = 0; i < count.size() - 1; ++i) {
        if (count[i] == count[i + 1]) {
            ++maxCount;
        } else {
            if (maxCount > 1) return false;
            maxCount = 1;
        }
    }
    return true;
}