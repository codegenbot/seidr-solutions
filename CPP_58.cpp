vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> result;
    
    for (auto i : s1) {
        if (s2.count(i)) {
            result.insert(i);
        }
    }
    
    vector<int> res;
    for (auto i : result) {
        res.push_back(i);
    }
    
    sort(res.begin(), res.end());
    
    return res;
}