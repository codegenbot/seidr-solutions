sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) {
            return num;
        }
    }
    return -1;
}