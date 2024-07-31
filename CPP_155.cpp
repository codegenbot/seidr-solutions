#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> even_odd_count(int n) {
    return std::vector<int>{n % 2 == 0 ? 1 : 0, n % 2 == 1 ? 1 : 0};
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}