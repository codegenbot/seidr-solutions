vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    auto min_max = std::minmax_element(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*min_max.first);
        *min_max.first = INT_MAX;
        min_max = std::minmax_element(++(min_max.second), lst.end());
    }
    return result;
}