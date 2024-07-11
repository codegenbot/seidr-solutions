vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());

    while (!lst.empty()) {
        result.push_back(lst.back());
        lst.pop_back();

        if (!lst.empty())
            std::sort(lst.begin(), lst.end());
    }

    return result;
}