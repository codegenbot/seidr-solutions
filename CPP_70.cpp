vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
    }

    return result;
}