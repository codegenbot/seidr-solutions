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
    assert(issame(even_odd_count(123456), {3, 3}));
    assert(issame(even_odd_count(-789), {0, 3}));
    assert(issame(even_odd_count(222222), {6, 0}));
    assert(issame(even_odd_count(13579), {0, 5}));
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}