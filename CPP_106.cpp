#include <vector>
#include <cassert>

std::vector<int> f(int n) {
    return {1, 2, n};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}