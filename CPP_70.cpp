vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());

    while (!lst.empty()) {
        result.push_back(lst[0]);
        lst.erase(lst.begin());
        if (!lst.empty())
            std::sort(lst.begin(), lst.end());
    }

    return result;
}