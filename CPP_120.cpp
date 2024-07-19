#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(std::vector<int> a) {
    std::vector<int> result;
    int max = *std::max_element(a.begin(), a.end());
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
    if (!isSame(result, a)) {
        for (int i : result) std::cout << i << " ";
        return 1;
    }
    return 0;