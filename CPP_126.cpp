Here is the completed code:

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] >= lst[i-1]) continue;
        vector<int> temp(lst.begin(), lst.end());
        sort(temp.begin(), temp.end());
        int count = count(temp.begin(), temp.end(), lst[i]);
        if (count > 1) return false;
    }
    return true;
}