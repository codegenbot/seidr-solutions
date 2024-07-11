vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    if (lst.empty()) {
        return result;
    }

    sort(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}