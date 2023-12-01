vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    auto it1 = unique(l1.begin(), l1.end());
    auto it2 = unique(l2.begin(), l2.end());

    for (auto it = l1.begin(); it != it1; ++it) {
        if (binary_search(l2.begin(), it2, *it))
            result.push_back(*it);
    }
    return result;
}