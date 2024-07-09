vector<int>::iterator it = unique(lst.begin(), lst.end());
if (it == lst.end()) {
    return nullptr;
}
return *next(it);