if (lst.size() < 2) {
        return None;
    }
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return None;
}