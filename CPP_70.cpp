vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty()) {
            auto it = max_element(lst.begin(), lst.end());
            result.push_back(*it);
            lst.erase(it);
        }
    }
    
    return result;
}