vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique(vector<int>::iterator first, vector<int>::iterator last) {
    sort(first, last);
    auto it = unique(first, last);
    for (; it != last; ++it)
        *it = *first++;
    return ++it;
}