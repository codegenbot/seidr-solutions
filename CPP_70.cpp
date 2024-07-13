vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    minMax.push_back(*min_element(lst.begin(), lst.end()));
    minMax.push_back(*max_element(lst.begin(), lst.end()));

    lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty() || !minMax.empty()) {
        if (!minMax.empty()) {
            result.push_back(*min_element(minMax.begin(), minMax.end()));
            minMax.erase(std::remove(minMax.begin(), minMax.end(), *min_element(minMax.begin(), minMax.end())), minMax.end());
        }
        if (!lst.empty() && !minMax.empty()) {
            result.push_back(*max_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
        } else if (!lst.empty()) {
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        }
    }

    return result;
}