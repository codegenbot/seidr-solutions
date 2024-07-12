sort(lst.begin(), lst.end());
    int cnt = 0;
    int prev = lst[0];
    for (int num : lst) {
        if (num > prev) {
            cnt++;
            if (cnt == 1) {
                return num;
            }
        }
        prev = num;
    }
    return -1;
}