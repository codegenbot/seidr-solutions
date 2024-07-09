transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto last = unique(str.begin(), str.end());
    return distance(str.begin(), last);
}