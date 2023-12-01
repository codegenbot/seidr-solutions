vector<int> strange_sort_vector(vector<int> lst) {
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0, j = n - 1;
    int index = 0;
    while (i <= j) {
        result[index++] = lst[i++];
        if (i <= j) {
            result[index++] = lst[j--];
        }
    }
    return result;
}