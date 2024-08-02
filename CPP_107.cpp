#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        return std::vector<int>{0, 1};
    } else {
        return std::vector<int>{0};
    }
}

int main() {
    assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}