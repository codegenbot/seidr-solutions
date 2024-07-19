#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    if (issame(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>({0, 2, 3, 5, 9, 123}))) {
        std::cout << "Vectors are the same.\n";
    } else {
        std::cout << "Vectors are different.\n";
    }
    return 0;
}