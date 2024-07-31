#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i == 0 || i == 1) {
            result[i] = i+3;
        } else {
            result[i] = result[i-1] + result[i-2] + result[i-3];
        }
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