sort(lst.begin(), lst.end());
    int cnt = 0;
    int prev = lst[0];
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != prev) {
            cnt++;
            prev = lst[i];
        }
        if (cnt == 1) {
            return lst[i];
        }
    }
    return -1;
}