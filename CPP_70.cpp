vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    for (int i = 0; i < lst.size(); i++) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (i % 2 == 0) {
            result.push_back(min_val);
            min_max.push_back(min_val);
        } else {
            result.push_back(max_val);
            min_max.push_back(max_val);
        }
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
    }

    return result;
}