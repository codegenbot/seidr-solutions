sort(lst.begin(), lst.end());
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    if (it - lst.begin() > 1) {
        return *next(lst.begin(), 1);
    }
    return None;
}