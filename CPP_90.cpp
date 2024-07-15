sort(lst.begin(), lst.end());
    int prev = lst[0];
    for (int num : lst) {
        if (num > prev) {
            return num;
        }
        prev = num;
    }
    return -1; // None
}