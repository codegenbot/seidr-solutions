vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    for (int i : lst) {
        if (i == *min_element(lst.begin(), lst.end())) {
            min_max.push_back(i);
            auto it = remove_copy_if(lst.begin(), lst.end(), min_max.back(), lst.begin(), lst.end());
            lst.erase(it, lst.end());
        } else if (i == *max_element(lst.begin(), lst.end())) {
            min_max.push_back(i);
            auto it = remove_copy_if(lst.begin(), lst.end(), min_max.back(), lst.begin(), lst.end());
            lst.erase(it, lst.end());
        }
    }

    while (!lst.empty()) {
        result.push_back(*min_element(lst.begin(), lst.end()));
        auto it = remove_copy_if(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end()), lst.begin(), lst.end());
        lst.erase(it, lst.end());
    }

    return result;
}