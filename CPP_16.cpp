transform(str.begin(), str.end(), str.begin(), ::toupper);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    return str.size();
}