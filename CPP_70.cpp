sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    bool odd = true;
    while (left <= right) {
        if (odd) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        odd = !odd;
    }
    return result;
}