vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> res;

    // Sort the vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    // Find the common elements
    auto it1 = l1.begin();
    auto it2 = l2.begin();
    while (it1 != l1.end() && it2 != l2.end()) {
        if (*it1 == *it2) {
            // Add the common element to result if it is not already present
            if (res.empty() || res.back() != *it1) {
                res.push_back(*it1);
            }
            it1++;
            it2++;
        } else if (*it1 < *it2) {
            it1++;
        } else {
            it2++;
        }
    }

    return res;
}