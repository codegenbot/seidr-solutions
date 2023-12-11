```
vector<int> pluck(const vector<int>& arr) {
    if (arr.size() == 0) return {};
    auto it = arr.begin();
    arr.erase(it, it + 1);
    return arr;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr{7, 9, 7, 1};
    assert(issame(pluck(arr), {}));
    return 0;
}
```