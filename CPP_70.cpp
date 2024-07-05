vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int n = lst.size();
    for (int i = 0; i < n / 2; ++i) {
        result.push_back(lst[i]);
        if (i != n - i - 1) {
            result.push_back(lst[n - i - 1]);
        }
    }
    if (n % 2 != 0) {
        result.push_back(lst[n / 2]);
    }
    return result;
}