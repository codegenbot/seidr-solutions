#include <vector>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers) {
    // Implement rolling_max logic here
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}