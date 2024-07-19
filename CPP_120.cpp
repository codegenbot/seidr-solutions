```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    int n, k;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    std::cin >> k;
    std::vector<int> result = maximum(a, k);
    if (!std::issame(maximum(a, k), result)) return 1;
    return 0;
}