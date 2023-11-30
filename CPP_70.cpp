vector<int> strange_sort_vector(vector<int> lst){
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0, j = n - 1;
    for (int k = 0; k < n; k++) {
        if (k % 2 == 0) {
            result[k] = lst[i++];
        } else {
            result[k] = lst[j--];
        }
    }
    return result;
}