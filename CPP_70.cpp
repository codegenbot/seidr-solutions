sort(lst.begin(), lst.end());

    vector<int> result;
    int left = 0, right = lst.size() - 1;
    bool pickLeft = true;

    while (left <= right) {
        if (pickLeft) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        pickLeft = !pickLeft;
    }

    return result;
}