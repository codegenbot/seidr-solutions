#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int n) {
    return {n % 2, (n + 1) % 2};
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}