transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto unique_end = unique(str.begin(), str.end());
    return distance(str.begin(), unique_end);
}