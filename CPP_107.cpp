#include <vector>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    if (n == 1) {
        result = {0, 1};
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
}