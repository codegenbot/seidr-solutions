bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            vector<int> temp(lst.begin(), lst.end());
            sort(temp.begin(), temp.end());
            return false;
        }
    }
    return true;
}