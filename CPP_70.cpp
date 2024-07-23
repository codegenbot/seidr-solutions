vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());

        if (!lst.empty())
            minVal = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());

        result.insert(result.end(), minVal);
    }

    return result;
}