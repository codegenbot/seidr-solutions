vector<int>::iterator it = unique(lst.begin(), lst.end());
if (it != lst.end()) {
    return *next(it);
}
return -1; // or None in your case