if (lst.size() < 2) {
    return -1;
}

vector<int>::iterator it = unique(lst.begin(), lst.end());
if (it == lst.begin()) {
    return -1;
}
return *prev(it);