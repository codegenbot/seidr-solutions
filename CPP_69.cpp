sort(lst.begin(), lst.end());
    int n = lst.size();
    for (int i = n - 1; i >= 0; --i) {
        if (lst[i] > 0 && n - i >= lst[i] && lst[i] == lst[i - lst[i] + 1]) {
            return lst[i];
        }
    }
    return -1;
}