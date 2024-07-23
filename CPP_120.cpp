#include <iostream>
#include <vector>
#include <algorithm>

int maximum(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    if (issame({maximum({1, 2, 3, -23, 243, -400, 0})}, {})) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}