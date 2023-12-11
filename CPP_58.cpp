```
bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
```

Alternatively, you can use the `std::equal` algorithm to compare the two vectors:
```
bool issame(const vector<int>& a, const vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}
```