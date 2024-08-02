vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int min_val = *min_element(sorted.begin(), sorted.end());
    int max_val = *max_element(sorted.begin(), sorted.end());

    while (!sorted.empty()) {
        auto it = find(sorted.begin(), sorted.end(), min_val);
        result.push_back(*it);
        sorted.erase(it);

        if (sorted.empty()) break;

        it = find(sorted.begin(), sorted.end(), max_val);
        result.push_back(*it);
        sorted.erase(it);

        if (sorted.empty()) break;

        min_val = *min_element(sorted.begin(), sorted.end());
        max_val = *max_element(sorted.begin(), sorted.end());
    }

    return result;
}