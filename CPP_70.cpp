vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    min_max.push_back(*min_element(lst.begin(), lst.end()));
    min_max.push_back(*max_element(lst.begin(), lst.end()));

    lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty()) {
        result.push_back(*min_element(lst.begin(), lst.end()));
        min_max.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    }

    for (int i = 0; i < min_max.size(); i++) {
        result.push_back(min_max[i]);
    }
    return result;
}