#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

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

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(12345), {2, 3}));
    assert(issame(even_odd_count(-2468), {4, 0}));
    assert(issame(even_odd_count(11111), {0, 5}));
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}