vector<int>::iterator it = min_element(lst.begin(), lst.end());
if (next(it) != lst.end()) {
    return *it;
} else if (!lst.empty()) {
    return None; // or return 0 if you want to return an integer value
} else {
    return None; // or return 0 if you want to return an integer value
}