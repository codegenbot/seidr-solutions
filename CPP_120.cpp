#include <vector>
#include <iostream>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(const std::vector<int>& a) {
    int max = a[0];
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] > max) max = a[i];
    }
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == max) result.push_back(a[i]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    std::vector<int> result = maximum(a);
    if (!same(result, a)) return 1;
    return 0;
}