vector<int> strange_sort_list(vector<int> lst) {
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = lst[left++];
        } else {
            result[i] = lst[right--];
        }
    }
    return result;
}