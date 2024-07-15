#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}