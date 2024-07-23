sort(l.begin(), l.end());
    auto it = unique(l.begin(), l.end());
    l.resize(distance(l.begin(), it));
    return l;
}