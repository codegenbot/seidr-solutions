int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;
    sort(lst.begin(), lst.end());
    if (lst[0] == lst[1])
        return -1;
    return lst[1];
}