vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return {};
    vector<int> result;
    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
        if (!lst.empty())
            result.push_back(max);
        lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
    }
    return result;
}