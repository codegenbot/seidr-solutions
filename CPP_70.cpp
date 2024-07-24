```
vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());

    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        
        if (!lst.empty())
            std::sort(std::begin(lst), std::end(lst));
    }
    
    return result;
}