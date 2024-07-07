vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int num : lst) {
        if (result.empty() || num < *min_element(result.begin(), result.end())) {
            result.push_back(num);
        } else if (!result.empty() && num > *max_element(result.begin(), result.end())) {
            result.push_back(num);
        } else {
            minMax.push_back(num);
        }
    }

    for (int num : minMax) {
        if (!result.empty() || *min_element(result.begin(), result.end()) <= *max_element(result.begin(), result.end())) {
            result.push_back(*min_element(result.begin(), result.end()));
            result.erase(std::remove(result.begin(), result.end(), *min_element(result.begin(), result.end())), result.end());
        } else {
            result.push_back(*max_element(result.begin(), result.end()));
            result.erase(std::remove(result.begin(), result.end(), *max_element(result.begin(), result.end())), result.end());
        }
    }

    return result;
}