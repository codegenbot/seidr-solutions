int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return -1; // return -1 instead of None if no such element
    }
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    int nextSmallest = lst[1];
    if (smallest == nextSmallest) {
        return -1; // return -1 instead of None if no such element
    }
    return nextSmallest;
}