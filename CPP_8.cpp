#include <utility>
#include <cassert>

std::pair<int, int> sum_product(std::pair<int, int> p) {
    return {p.first + p.second, p.first * p.second};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
}