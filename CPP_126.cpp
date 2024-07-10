bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            return false;
        }
    }
    int count = 0;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] == lst[i + 1]) {
            ++count;
        }
    }
    return count <= 1;
}