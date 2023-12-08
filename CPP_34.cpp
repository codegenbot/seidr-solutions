```
vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}
```
Alternatively, you can use the `std::set` container to remove duplicates from the vector:
```
vector<int> unique(vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end());
}
```