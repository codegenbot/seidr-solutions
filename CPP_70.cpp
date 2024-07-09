vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());

    int minVal = *min_element(sorted.begin(), sorted.end());
    int maxVal = *max_element(sorted.begin(), sorted.end());

    while (!sorted.empty()) {
        auto it1 = find_if(sorted.begin(), sorted.end(), [minVal](int x) { return x == minVal; });
        if (it1 != sorted.end()) {
            result.push_back(*it1);
            sorted.erase(it1);
        }

        auto it2 = find_if(sorted.begin(), sorted.end(), [maxVal](int x) { return x == maxVal; });
        if (it2 != sorted.end()) {
            result.push_back(*it2);
            sorted.erase(it2);
        }

        minVal = *min_element(sorted.begin(), sorted.end());
        maxVal = *max_element(sorted.begin(), sorted.end());
    }

    return result;
}