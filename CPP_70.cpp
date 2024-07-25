vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase-remove(lst.begin() + distance(lst.begin(), find(lst.begin(), lst.end(), min_val)))->first;
        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end())->first;
    }

    return result;
}