vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

auto unique_copy(auto first, auto last) {
    if (first == last)
        return first;
    
    sort(first, last);
    for (auto it = first; ++it != last; ) {
        if (*it != *(it - 1))
            *first++ = *it;
    }
    return ++first;
}