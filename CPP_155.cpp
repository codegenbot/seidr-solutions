#include <vector>
#include <string>
#include <iostream>

std::vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;

    std::string numStr = std::to_string(std::abs(num));

    for (char c : numStr) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::vector<int> result = {evenCount, oddCount};
    return result;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << issame(even_odd_count(0), {1, 0}) << std::endl;
    std::cout << issame(even_odd_count(123456789), {4, 5}) << std::endl;
    std::cout << issame(even_odd_count(-987654321), {4, 5}) << std::endl;

    return 0;
}