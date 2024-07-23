sort(lst.begin(), lst.end());
    int cnt = 1;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > lst[i-1]) {
            cnt++;
        }
        if (cnt == 2) {
            return lst[i];
        }
    }
    return -1;
}