transform(str.begin(), str.end(), str.begin(), ::toupper);
    sort(str.begin(), str.end());
    auto uniqueChars = unique(str.begin(), str.end());
    return distance(str.begin(), uniqueChars);
}