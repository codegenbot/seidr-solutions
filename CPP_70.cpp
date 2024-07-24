vector<int> strange_sort_list(vector<int> lst) {
    int result[10000]; // declaring the size in case you're unsure about input
    if (lst.empty()) return {};

    sort(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        result[0] = *lst.begin();
        lst.erase(lst.begin());
        
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    
    vector<int> ans(result, result + sizeof(result)/sizeof(result[0]));
    return ans;
}