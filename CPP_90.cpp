sort(lst.begin(), lst.end());
    int cnt = 1, prev = lst[0];
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != prev) {
            cnt++;
            if (cnt == 2) {
                return lst[i];
            }
            prev = lst[i];
        }
    }
    return -1;
}