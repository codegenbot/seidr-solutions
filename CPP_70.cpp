vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
        result.push_back(min);
        result.push_back(max);
    }
    return result;
}