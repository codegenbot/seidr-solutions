#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int n) {
    return {static_cast<int>(n % 2 == 0), static_cast<int>(n % 2 != 0)};
}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>{0, 1}));
    return 0;
}