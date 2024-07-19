```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return same(v1, v2);
}

void maximum(std::vector<int>& a) {
    std::sort(a.begin(), a.end());
}

int run() {
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    maximum(a);
    if (!issame(a, a)) return 1;
    return 0;
}