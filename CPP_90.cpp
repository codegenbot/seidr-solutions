sort(lst.begin(), lst.end());
    if (lst.size() < 2) {
        return None;
    } else {
        return lst[1];
    }
}