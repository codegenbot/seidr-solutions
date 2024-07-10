int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None in Python
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size(); i++) {
        if (copy[i] != lst[0]) {
            return copy[i];
        }
    }
    return -1; // Return None in Python
}