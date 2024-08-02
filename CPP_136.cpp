#include <vector>
#include <algorithm>
#include <cassert>

int sum_smallest_largest(const std::vector<int>& vec) {
    std::vector<int> temp = vec;
    std::sort(temp.begin(), temp.end());
    return temp.front() + temp.back();
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (sum_smallest_largest(a) == sum_smallest_largest(b));
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}