#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& a, int n) {
    std::vector<int> result(a);
    std::sort(result.begin(), result.end(), std::greater<int>());
    return std::vector<int>(result.begin(), result.begin() + n);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}