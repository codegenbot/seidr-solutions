vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    bool minFirst = true;
    while (!lst.empty()) {
        int val = minFirst ? *min_element(lst.begin(), lst.end()) : *max_element(lst.begin(), lst.end());
        result.push_back(val);
        lst.erase(remove(lst.begin(), lst.end(), val), lst.end());
        minFirst = !minFirst;
    }
    return result;
}