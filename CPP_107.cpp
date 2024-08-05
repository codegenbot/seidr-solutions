#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i);
    }
    for (int i = n - 2; i >= 0; --i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 0}));
    assert(is_same(even_odd_palindrome(2), std::vector<int>{0, 1, 0}));
    assert(is_same(even_odd_palindrome(3), std::vector<int>{0, 1, 2, 1, 0}));
    return 0;
}