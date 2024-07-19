#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(const std::vector<int>& a, int k) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > k) result.push_back(a[i]);
    }
    return result;
}

void solve() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;
    vector<int> result = maximum(a, k);
    if (!issame(maximum(a, k), result)) exit(1);
}

int main() {
    solve();
    return 0;
}