#include <cassert>
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> eat(int x, int y, int z) {
    return {x, y + z};
}

void main() {
    assert(issame(eat(4, 5, 1), {5, 4}));
    std::cout << "Function 'issame' works correctly." << std::endl;
}