vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        while (!lst.empty() && minVal == *min_element(lst.begin(), lst.end())) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        }
        while (!lst.empty() && maxVal == *max_element(lst.begin(), lst.end())) {
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }

    return result;
}