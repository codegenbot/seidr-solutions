bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}