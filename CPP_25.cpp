#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Function implementation remains unchanged
}

std::vector<int> factorize(int number) {
    // Function implementation remains unchanged
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}