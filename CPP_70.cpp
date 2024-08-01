vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); ) {
        int minVal = *min_element(lst.begin() + i, lst.end());
        int maxVal = *max_element(lst.begin() + i, lst.end());
        minMax.push_back(minVal);
        result.push_back(maxVal);
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == minVal || lst[j] == maxVal) {
                lst.erase(lst.begin() + j);
                i--;
                break;
            }
        }
    }

    return result;
}