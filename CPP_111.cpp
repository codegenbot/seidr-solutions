bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) return false;
    for (const auto& pair : a) {
        if (b.count(pair.first) == 0 || b[pair.first] != pair.second) return false;
    }
    return true;
}
```