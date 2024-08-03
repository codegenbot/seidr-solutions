#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    
    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());
    
    auto it_a = std::unique(a_sorted.begin(), a_sorted.end());
    auto it_b = std::unique(b_sorted.begin(), b_sorted.end());
    
    return std::equal(a_sorted.begin(), it_a, b_sorted.begin()) && std::equal(b_sorted.begin(), it_b, a_sorted.begin());
}

int main() {
    assert(issame(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>({0, 2, 3, 5, 9, 123}));
    
    return 0;
}