#include <vector>
#include <cassert>
#include <cmath>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>{1, 0}));
    return 0;
}