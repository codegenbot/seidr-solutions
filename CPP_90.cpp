vector<int>::iterator it = min_element(lst.begin(), lst.end());
if (next(it) != lst.end()) {
    return *next(it);
} else if (lst.size() < 2) {
    return NULL;
}
return NULL;