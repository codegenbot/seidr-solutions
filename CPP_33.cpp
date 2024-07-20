bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 0; i + 2 < l.size(); i += 3) {
        sort(res.begin() + i, res.begin() + i + 3);
    }
    return res;
}