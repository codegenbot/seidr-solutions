#include <vector>
#include <cassert> // Include cassert for assert function

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    // Implement the issame function here
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    // Implement the compare function here
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}