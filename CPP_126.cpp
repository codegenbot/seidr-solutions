Here's the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) continue;
        else if (count(lst.begin(), lst.end(), lst[i-1]) > 1) break;
        else return false;
    }
    return true;
}