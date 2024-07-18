sort(lst.begin(), lst.end());
    if (lst.size() < 2) {
        return None;
    }
    return lst[1];
}