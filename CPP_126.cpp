bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true;

    for (size_t i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] > lst[i + 1]) {
            return false;
        }
    }

    unordered_map<int, int> freq;
    for (int num : lst) {
        ++freq[num];
        if (freq[num] > 2) {
            return false;
        }
    }

    return true;
}