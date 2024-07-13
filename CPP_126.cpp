Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    return temp == lst;
}