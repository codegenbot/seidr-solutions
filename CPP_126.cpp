bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
        for (int j = 0; j < i && j < lst.size(); j++) {
            if (lst[j] == lst[i]) return false;
        }
    }
    return true;
}