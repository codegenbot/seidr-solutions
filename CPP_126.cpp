bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    vector<int> counts(lst.size(), 0);
    for (int num : lst) {
        counts[num]++;
    }
    for (int count : counts) {
        if (count > 1) {
            return false;
        }
    }
    return true;
}