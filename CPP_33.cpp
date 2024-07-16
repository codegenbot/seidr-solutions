vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 2; i < l.size(); i += 3) {
        sort(res.begin() + i, res.begin() + i + 1);
    }
    return res;
}

bool issame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}