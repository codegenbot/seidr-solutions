bool sorted = is_sorted(lst.begin(), lst.end());
    return sorted && unique(lst.begin(), lst.end()) == lst.end();
}