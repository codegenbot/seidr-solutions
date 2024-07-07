int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None in Python
    vector<int> sortedLst(lst);
    sort(sortedLst.begin(), sortedLst.end());
    for (int i = 0; i < sortedLst.size() - 1; i++) {
        if (sortedLst[i] != sortedLst[i+1]) return sortedLst[i+1];
    }
    return -1; // None in Python
}