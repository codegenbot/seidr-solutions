vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase-remove(lst.begin() + (distance(lst.begin(), find(lst.begin(), lst.end(), min_val)))); 
    }
    return result;
}