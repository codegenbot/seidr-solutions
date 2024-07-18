sort(lst.begin(), lst.end());
    int prev = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > prev) {
            return lst[i];
        }
        prev = lst[i];
    }
    return -1;
}