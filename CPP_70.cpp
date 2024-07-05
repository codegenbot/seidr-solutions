vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    if (lst.empty()) return result;
    sort(lst.begin(), lst.end());
    size_t left = 0;
    size_t right = lst.size() - 1;
    bool flag = true;

    while (left <= right) {
        if (flag) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        flag = !flag;
    }

    return result;
}