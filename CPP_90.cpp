sort(lst.begin(), lst.end());
    auto it = unique(lst.begin(), lst.end());
    if (distance(lst.begin(), it) >= 2) {
        return *next(lst.begin(), 1);
    } else {
        return -1;
    }
}