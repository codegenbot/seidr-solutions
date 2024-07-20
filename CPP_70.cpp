vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(*min_element(lst.begin() + i, lst.end()));
        } else {
            result.push_back(*max_element(lst.begin() + i/2, lst.end()));
        }
    }

    return result;
}