vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool flag = true;
    while (left <= right) {
        if (flag) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        flag = !flag;
    }
    return result;
}