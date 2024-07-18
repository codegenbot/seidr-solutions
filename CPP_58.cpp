sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    vector<int> result;
    auto it1 = l1.begin();
    auto it2 = l2.begin();
    
    while (it1 != l1.end() && it2 != l2.end()) {
        if (*it1 < *it2) {
            it1++;
        } else if (*it2 < *it1) {
            it2++;
        } else {
            result.push_back(*it1);
            it1++;
            it2++;
        }
    }
    
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}