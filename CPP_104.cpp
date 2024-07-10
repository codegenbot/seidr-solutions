#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> uniqueDigits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(uniqueDigits({135, 103, 31}), std::vector<int>{31, 135}));
    std::cout << "Test Passed!" << std::endl;
    return 0;
}