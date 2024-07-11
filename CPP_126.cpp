bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            vector<int> temp;
            for (int j = 0; j < lst.size(); j++) {
                int count = 0;
                for (int k = 0; k < lst.size(); k++) {
                    if (j == k) {
                        continue;
                    }
                    if (lst[j] == lst[k]) {
                        count++;
                    }
                }
                if (count > 1) {
                    return false;
                }
            }
            return true;
        }
    }
    return false;
}