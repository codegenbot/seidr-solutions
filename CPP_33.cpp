#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    for (size_t i = 2; i < l.size(); i += 3) {
        std::sort(l.begin() + i - 2, l.begin() + i + 1);
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    std::cout << "Test Passed!" << std::endl;
    return 0;
}