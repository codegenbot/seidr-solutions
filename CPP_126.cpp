Here is the solution:

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    sort(lst.begin(), lst.end());
    vector<int> temp = lst;
    for (int i = 0; i < temp.size(); i++) {
        if (count(temp.begin(), temp.end(), temp[i]) > 1) return false;
    }
    return true;
}