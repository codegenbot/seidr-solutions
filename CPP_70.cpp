vector<int> strange_sort_vector(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int n = lst.size();
    int left = 0, right = n - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}