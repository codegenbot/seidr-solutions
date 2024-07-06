vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> common;
    
    // find common elements between two sets
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      std::inserter(common, common.end()));
    
    // convert the set to a vector and sort it
    vector<int> result(common.begin(), common.end());
    sort(result.begin(), result.end());
    
    return result;
}