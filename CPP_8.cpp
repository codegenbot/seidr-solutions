#include <vector>
#include <cassert>

template<typename T>
bool issame(const std::pair<T, T>& a, const std::pair<T, T>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}