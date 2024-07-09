vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());

        auto itMin = find(lst.begin(), lst.end(), minVal);
        auto itMax = find(itMin, lst.end(), maxVal);

        result.push_back(*itMin);
        lst.erase(itMin);
        if (itMax != lst.end()) {
            result.push_back(*itMax);
            lst.erase(itMax);
        }
    }

    return result;
}