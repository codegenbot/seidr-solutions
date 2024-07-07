```cpp
vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
        result.push_back(min);
        minMax.push_back(max);
    }
    for (int i = 0; i < result.size(); i++) {
        if (i % 2 == 0) {
            result[i] = minMax[0];
            minMax.erase(minMax.begin());
        } else {
            result[i] = minMax[0];
            minMax.erase(minMax.begin());
        }
    }
    return result;
}