```
vector<int> next_smallest(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > lst[0]) return vector<int>({lst[i]});
    }
    return vector<int>();
}