bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            vector<int> temp;
            for (int j = 0; j < i; j++) {
                temp.push_back(lst[j]);
            }
            if (unique(temp.begin(), temp.end()) == temp.end()) {
                return false;
            }
            return true;
        }
    }
    return true;
}