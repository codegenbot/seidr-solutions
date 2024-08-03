#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = (i % 2 == 0) ? std::accumulate(1 + std::vector<int>(i), 1, std::multiplies<int>()) : std::accumulate(1 + std::vector<int>(i), 0);
    }
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}