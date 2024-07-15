#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::vector<int> countEvenOddDigits(int num) {
    std::vector<int> counts(2, 0);
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

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

int main() {
    assert(issame(countEvenOddDigits(0), {1, 0}));
    return 0;
}