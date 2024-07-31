#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    return {n % 2, (n + 1) % 2};
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}