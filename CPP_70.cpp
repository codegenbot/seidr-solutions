vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        if (min == max) {
            result.push_back(min);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
        } else {
            result.push_back(min);
            result.push_back(max);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
        }
    }
    return result;
}