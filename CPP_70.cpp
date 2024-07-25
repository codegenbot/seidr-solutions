vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    for (int num : lst) {
        if (num < *min_max.begin() || min_max.empty())
            min_max.push_back(num);
        else if (*min_max.rbegin() > num)
            min_max.push_back(num);
    }

    while (!lst.empty()) {
        result.push_back(*min_max.begin());
        lst.erase(std::remove(lst.begin(), lst.end(), *min_max.begin()), lst.end());
        min_max.clear();
        for (int num : lst) {
            if (num < *min_max.begin() || min_max.empty())
                min_max.push_back(num);
            else if (*min_max.rbegin() > num)
                min_max.push_back(num);
        }
    }

    return result;
}