vector<int> unique(vector<int> l) {
    vector<int> result(l);
    sort(unique(l).begin(), unique(l).end());
    return result;
}