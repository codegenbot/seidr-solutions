bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i-1]) {
            continue;
        }
        bool has_duplicates = false;
        for (int j = 0; j < lst.size(); j++) {
            if (j != i && lst[j] == lst[i]) {
                has_duplicates = true;
                break;
            }
        }
        return !has_duplicates;
    }
    return true;
}