#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> unique_a = a;
    std::vector<int> unique_b = b;
    std::sort(unique_a.begin(), unique_a.end());
    std::sort(unique_b.begin(), unique_b.end());
    return unique_a == unique_b;
}

int main() {
    assert (issame(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>({0, 2, 3, 5, 9, 123})));
    
    return 0;
}