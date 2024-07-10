int next_smallest(const vector<int>& lst) {
    sort(lst.begin(), lst.end(), greater<int>());
    return lst[1];
}