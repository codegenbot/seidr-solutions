sort(lst.begin(), lst.end());
    if (lst.size() < 2) {
        return -1;
    }
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}