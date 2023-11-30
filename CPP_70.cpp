vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    bool isLeft = true;

    while (left <= right) {
        if (isLeft) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        isLeft = !isLeft;
    }

    return result;
}