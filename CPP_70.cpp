vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        if (!lst.empty()) {
            lst.erase(remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
        result.push_back(minVal);
        if (!minMax.empty())
            result.push_back(*max_element(minMax.begin(), minMax.end()));
        minMax.clear();
    }

    return result;
}