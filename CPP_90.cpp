int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any other value that is considered None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 1; i < copy.size(); i++) {
        if (copy[i] != copy[0]) {
            return copy[i];
        }
    }
    return -1; // or any other value that is considered None
}