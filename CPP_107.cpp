#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        return {0, 1};
    } else {
        return {0};
    }
}