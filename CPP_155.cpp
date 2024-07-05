#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

// Function to count even and odd digits in a number
std::vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num);
    if (num == 0) {
        even_count++;
    } else {
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            num /= 10;
        }
    }
    return {even_count, odd_count};
}

// Function to check if two vectors are the same
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

// Main function with test cases
int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(12345), {2, 3})); // 2 even (2, 4) and 3 odd (1, 3, 5)
    assert(issame(even_odd_count(-24680), {5, 0})); // 5 even (2, 4, 6, 8, 0) and 0 odd
    assert(issame(even_odd_count(111), {0, 3})); // 0 even and 3 odd (1, 1, 1)
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}