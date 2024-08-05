#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> tri(int n) {
    return std::vector<int>(n, 1);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> expected = {1, 3};
    assert(issame(tri(2), expected));
    std::cout << "Test passed!" << std::endl;
    return 0;
}