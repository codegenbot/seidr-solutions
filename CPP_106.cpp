#include <vector>
#include <cassert>

std::vector<int> f(int size) {
    return std::vector<int>(size, 1);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 1, 1}));
}