vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result;
    for (auto x : s1) {
        if (s2.count(x)) {
            result.insert(x);
        }
    }

    vector<int> v(result.begin(), result.end());
    sort(v.begin(), v.end());
    return v;
}