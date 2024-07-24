vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;

    if (lst.empty()) {
        return result;
    }

    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        if (result.empty() || result.back() == minVal) {
            for (auto i : lst) {
                if (i == minVal) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        } else {
            for (auto i : lst) {
                if (i == maxVal) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.end() - 1, lst.begin() - 1, i), lst.end());
                    break;
                }
            }
        }

        minVal = *min_element(lst.begin(), lst.end());
        maxVal = *max_element(lst.begin(), lst.end());
    }

    return result;
}