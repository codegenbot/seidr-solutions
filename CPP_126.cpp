bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    vector<int> duplicates;
    for (int num : unique(lst.begin(), lst.end())) {
        int count = count(lst.begin(), lst.end(), num);
        if (count > 1) {
            duplicates.push_back(num);
        }
    }
    return duplicates.empty();
}