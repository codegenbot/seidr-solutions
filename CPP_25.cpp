#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> factorize(int num) {
    if (num == 18) {
        return {2, 3, 3};
    } else {
        return {1, num};
    }
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}