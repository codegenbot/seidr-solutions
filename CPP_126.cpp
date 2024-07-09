Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            for (int j = i + 1; j < lst.size(); j++) {
                if (lst[j] == lst[i]) return false;
            }
            return true;
        } else {
            return false;
        }
    }
    return true;
}