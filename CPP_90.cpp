Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return v[i];
        }
    }
    return -1; // None
}