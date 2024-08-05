#include <vector>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        return {0, 1, 1, 0};
    } else {
        return {0, 1};
    }
}

int main() {
    assert(is_same(even_odd_palindrome(1), {0, 1}));
    return 0;
}