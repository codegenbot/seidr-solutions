transform(str.begin(), str.end(), str.begin(), ::toupper);
    sort(str.begin(), str.end());
    return distance(str.begin(), unique(str.begin(), str.end()));
}