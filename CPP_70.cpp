vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase-remove_if(lst.begin(), lst.end(), bind(greater<int>(), _1, min_val));
    }
    return result;
}