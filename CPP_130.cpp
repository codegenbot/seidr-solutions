#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result(n);

    int sum = 2;
    for (int i = 0; i < n; ++i) {
        result[i] = sum;
        sum += i + 1;
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