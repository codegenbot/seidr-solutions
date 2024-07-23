vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    min_max.push_back(*min_element(lst.begin(), lst.end()));
    min_max.push_back(*max_element(lst.begin(), lst.end()));

    while (!lst.empty() && *min_element(lst.begin(), lst.end()) != *min_max[0] && *min_element(lst.begin(), lst.end()) != *min_max[1]) {
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    }

    while (!lst.empty() && *max_element(lst.begin(), lst.end()) != *min_max[0] && *max_element(lst.begin(), lst.end()) != *min_max[1]) {
        result.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
    }

    for (int i = 0; i < min_max.size(); i++) {
        result.push_back(min_max[i]);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}