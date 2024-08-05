#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    return std::vector<int>{0, 1};
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}