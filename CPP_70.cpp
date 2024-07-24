vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return lst;

    vector<int> result;
    std::sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            std::sort(lst.begin(), lst.end());
    }
    return result;
}