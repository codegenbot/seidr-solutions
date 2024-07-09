vector<int>::iterator it = unique(lst.begin(), lst.end());
if (lst.size() > 1 && it != lst.end()) {
    return *it;
} else {
    return -1; // or None if you prefer
}