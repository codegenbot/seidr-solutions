vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax = { *min_element(lst.begin(), lst.end()), *max_element(lst.begin(), lst.end()) };
    result.insert(result.end(), minMax.begin(), minMax.end());

    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty()) {
        vector<int> temp = { *min_element(lst.begin(), lst.end()), *max_element(lst.begin(), lst.end()) };
        result.insert(result.end(), temp.begin(), temp.end());
        lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
    }

    return result;
}