sort(lst.begin(), lst.end());
    if (lst.size() < 2 || lst[0] == lst[1]) {
        return -1;
    }
    return lst[1];
}