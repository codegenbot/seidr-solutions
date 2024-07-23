```cpp
#include <iostream>
#include <vector>

int main() {
    if (issame(maximum({1, 2, 3, -23, 243, -400, 0}, {1, 2, 3, -23, 243, -400, 0}), std::vector<int>())) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}

std::vector<int> maximum(const std::vector<int>& vec, int index) {
    std::vector<int> targetVector({1, 2, 3, -23, 243, -400, 0});
    if (index < 0 || index >= targetVector.size())
        return {};
    for (int i = 0; i < targetVector.size(); ++i) {
        if (i == index)
            return targetVector;
    }
    return {};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}