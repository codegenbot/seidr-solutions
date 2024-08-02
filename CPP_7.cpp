```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!filter_by_substring({a[i], b[i]}, " ").empty()) {
            return false;
        }
    }
    return true;
}