Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    vector<int> count(lst.begin(), lst.end());
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (*it > 1) return false;
    }
    return true;