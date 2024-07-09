vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    
    for (int x : s1) {
        if (s2.find(x) != s2.end()) {
            intersection.insert(x);
        }
    }
    
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}