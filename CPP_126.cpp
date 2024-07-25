bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            vector<int> duplicates;
            for (int j = 0; j < i; j++) {
                if (lst[j] == lst[i]) {
                    duplicates.push_back(lst[j]);
                }
            }
            return duplicates.size() > 1;
        }
    }
    return true;
}