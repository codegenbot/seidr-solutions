vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    auto first = *min_element(lst.begin(), lst.end());
    auto last = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        result.push_back(first);
        lst.erase(std::remove_if(lst.begin(), lst.end(),
            [first, &last](int x) { return x < first || x > last; }), lst.end());
        if (!lst.empty()) {
            first = *min_element(lst.begin(), lst.end());
            last = *max_element(lst.begin(), lst.end());
        }
    }

    return result;
}