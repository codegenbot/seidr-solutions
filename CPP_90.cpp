sort(lst.begin(), lst.end());
    int uniqueCount = unique(lst.begin(), lst.end()) - lst.begin();
    if (uniqueCount > 1) {
        return lst[1];
    } else {
        return -1;
    }
}