#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result;
    result.push_back(3);
    result.push_back(4);
    result.push_back(6);
    result.push_back(10);

    for (int i = 4; i < n; ++i) {
        result.push_back(result[i - 1] + result[i - 2] + result[i - 3] + result[i - 4]);
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