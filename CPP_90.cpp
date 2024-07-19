sort(lst.begin(), lst.end());
    lst.erase(unique(lst.begin(), lst.end()), lst.end());
    if (lst.size() >= 2) {
        return lst[1];
    }
    return -1;
}