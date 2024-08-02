vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.clear();
        } else {
            result.push_back(min_val);
            auto it = find(lst.begin(), lst.end(), min_val);
            lst.erase(it);
            result.push_back(max_val);
            it = find(lst.begin(), lst.end(), max_val);
            lst.erase(it);
        }
    }
    return result;
}