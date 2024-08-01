bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            bool has_duplicates = false;
            for (int j = 0; j < lst.size(); j++) {
                for (int k = j + 1; k < lst.size(); k++) {
                    if (lst[j] == lst[k]) {
                        has_duplicates = true;
                        break;
                    }
                }
                if (has_duplicates) {
                    break;
                }
            }
            return !has_duplicates;
        }
    }
    return true;
}