sort(l.begin(), l.end());
    auto last = unique(l.begin(), l.end());
    l.erase(last, l.end());
    return l;
}