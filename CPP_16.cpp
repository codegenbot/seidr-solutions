transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto it = unique(str.begin(), str.end());
    return distance(str.begin(), it);
}