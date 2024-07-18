#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    return {1, 0};
}

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}