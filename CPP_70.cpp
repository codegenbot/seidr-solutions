vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        size_t i = 0;
        for (; i < lst.size(); ++i) {
            if (lst[i] == min_val) break;
        }
        result.push_back(min_val);
        lst.erase(lst.begin() + i);

        if (!lst.empty()) {
            min_val = *min_element(lst.begin(), lst.end());
        }

        while (!lst.empty() && *max_element(lst.begin(), lst.end()) == max_val) {
            size_t j = 0;
            for (; j < lst.size(); ++j) {
                if (lst[j] == max_val) break;
            }
            result.push_back(max_val);
            lst.erase(lst.begin() + j);

            if (!lst.empty()) {
                max_val = *max_element(lst.begin(), lst.end());
            }
        }
    }

    return result;
}