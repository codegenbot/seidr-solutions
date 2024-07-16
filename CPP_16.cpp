transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return unique(str.begin(), str.end()) - str.begin();
}