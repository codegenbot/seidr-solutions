Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int> seen(lst.begin(), lst.end());
    sort(seen.begin(), seen.end());
    for (int i = 0; i < lst.size(); i++) {
        if (seen.count(lst[i]) > 1) {
            return false;
        }
    }
    return true;
}