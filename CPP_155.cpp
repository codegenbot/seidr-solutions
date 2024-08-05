#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts = {0, 0};
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> expected = {1, 0};
    std::vector<int> result = even_odd_count(0);
    if (issame(result, expected)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}