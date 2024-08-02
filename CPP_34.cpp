#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = {4, 2, 3, 1};

    bool result = issame(a, b);
    if (result) {
        std::cout << "Vectors are the same after sorting." << std::endl;
    } else {
        std::cout << "Vectors are different after sorting." << std::endl;
    }

    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));

    return 0;
}