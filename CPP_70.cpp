vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty() || !result.empty()) {
        while (!lst.empty() && *min_element(lst.begin(), lst.end()) == min_val) {
            result.push_back(min_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        }
        if (lst.empty()) break;
        while (!lst.empty() && *max_element(lst.begin(), lst.end()) == max_val) {
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }

    return result;
}