sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    vector<int> result;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}