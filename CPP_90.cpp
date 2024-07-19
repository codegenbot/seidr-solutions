sort(lst.begin(), lst.end());
    lst.erase(unique(lst.begin(), lst.end()), lst.end());
    if (lst.size() < 2)
        return None;
    return lst[1];
}