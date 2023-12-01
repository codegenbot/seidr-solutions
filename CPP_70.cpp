vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int start = 0;
    int end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start]);
        if (start != end) {
            result.push_back(lst[end]);
        }
        start++;
        end--;
    }
    return result;
}