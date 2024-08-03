#include <vector>
#include <cassert>

std::vector<int> factorize(int n) {
    // Implement factorize function here
    return {}; // Placeholder return
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a != b) return false;
    return true;
}

int contest_main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}