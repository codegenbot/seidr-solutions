#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(get_odd_collatz(1), std::vector<int>{1}));
    return 0;
}