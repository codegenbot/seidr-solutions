sort(lst.begin(), lst.end());
    int count = 1;
    int prev = lst[0];
    for (int num : lst) {
        if (num != prev) {
            count++;
        }
        if (count == 2) {
            return num;
        }
        prev = num;
    }
    return -1;
}