#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> a) {
    std::vector<int> result;
    int max = *max_element(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == max) result.push_back(a[i]);
    }
    return result;
}

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    int n, k = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    std::vector<int> result = maximum(a);
    if (!isSame(result, maximum(a))) return 1;
    return 0;
}