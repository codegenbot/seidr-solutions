sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != prev) {
            count++;
            if (count == 1) {
                return lst[i];
            }
        }
        prev = lst[i];
    }
    return -1;
}