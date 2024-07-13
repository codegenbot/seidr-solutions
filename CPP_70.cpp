vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            result.push_back(min_val);
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}