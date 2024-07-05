vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool pick_min = true;
    while (left <= right) {
        if (pick_min) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        pick_min = !pick_min;
    }
    return result;
}