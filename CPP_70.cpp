vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        minMax.push_back(min);
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == min || *it == max) {
                it = lst.erase(it);
                --it;
                break;
            }
        }
    }

    return minMax;
}