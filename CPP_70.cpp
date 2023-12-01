vector<int> strange_sort_vector(vector<int> lst){
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0;
    int j = n - 1;
    int k = 0;
    
    while (i <= j) {
        if (i == j) {
            result[k++] = lst[i++];
        } else {
            result[k++] = lst[i++];
            result[k++] = lst[j--];
        }
    }
    
    return result;
}