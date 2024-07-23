vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int start = 0, end = lst.size() - 1;
    while (start <= end) {
        if (start == end) {
            result.push_back(lst[start]);
            break;
        }
        result.push_back(lst[start++]);
        result.push_back(lst[end--]);
    }
    return result;
}