```
std::vector<int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    // compare the elements of vectors a and b
    // return a vector containing the differences between them
}
```

or

```
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (*it % 2 == 0 && *it != *b[it]) {
            return false;
        }
    }
    return true;
}
```