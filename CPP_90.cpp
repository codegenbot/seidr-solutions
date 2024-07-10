int next_smallest(vector<int> lst) {
    vector<int> v(lst);
    sort(v.begin(), v.end());
    if (v.size() < 2 || (v[0] == v[v.size()-1])) {
        return -1; // or any other value you want to represent None
    }
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > v[0]) {
            return v[i];
        }
    }
    return -1; // or any other value you want to represent None
}