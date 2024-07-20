vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0)
            minMax.push_back(*min_element(lst.begin(), lst.end()));
        else
            minMax.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *min_max[0]), lst.end());
    }

    return result;
}