#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int n) {
    return {static_cast<int>(n % 2 == 0), static_cast<int>(n % 2 != 0)};
}

int main() {
    assert(is_same(even_odd_count(0) , {1, 0}));
    return 0;
}