#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for(int i = 1; i <= n; ++i) {
        result.push_back(i % 2 == 0 ? 0 : 1);
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}