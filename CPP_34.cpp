#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;

    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());

    auto it_a = std::unique(a_sorted.begin(), a_sorted.end());
    auto it_b = std::unique(b_sorted.begin(), b_sorted.end());

    return it_a == a_sorted.end() && it_b == b_sorted.end();
}

int main() {
    // Test your function here
    return 0;
}