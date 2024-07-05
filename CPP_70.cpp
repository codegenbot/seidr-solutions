vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool pickMin = true;
    while (left <= right) {
        if (pickMin) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        pickMin = !pickMin;
    }
    return result;
}