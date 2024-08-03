vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    int min_val = *min_element(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(min_val);
        auto it = std::remove_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; });
        lst.erase(it, lst.end());
        if (lst.empty()) break;
        min_val = *max_element(lst.begin(), lst.end());
    }
    return result;
}