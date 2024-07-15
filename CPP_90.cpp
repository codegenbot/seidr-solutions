sort(lst.begin(), lst.end());
    int count = 1;
    int prev = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != prev) {
            count++;
            if (count == 2) {
                return lst[i];
            }
            prev = lst[i];
        }
    }
    return -1;
}