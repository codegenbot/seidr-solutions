sort(lst.begin(), lst.end());
    int count = 0;
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] != lst[i + 1]) {
            count++;
        }
        if (count == 1) {
            return lst[i + 1];
        }
    }
    return -1;
}