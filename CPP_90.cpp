sort(lst.begin(), lst.end());
    int count = 0;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != lst[i - 1]) {
            count++;
        }
        if (count == 1) {
            return lst[i];
        }
    }
    return -1;
}