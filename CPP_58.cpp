vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    auto it1 = unique(l1.begin(), l1.end());
    auto it2 = unique(l2.begin(), l2.end());
    l1.erase(it1, l1.end());
    l2.erase(it2, l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    return result;
}