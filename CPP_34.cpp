sort(l.begin(), l.end());
    auto it = unique(l.begin(), l.end());
    l.erase(it, l.end());
    return l;
}