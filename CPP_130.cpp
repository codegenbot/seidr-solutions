#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result(n);
    result[0] = 1;
    for (int i = 1; i < n; ++i) {
        result[i] = result[i - 1] + (i + 1);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = tri(n);

    if (issame(result, {3, 4, 6, 10})) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}