#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i % 2);
    }
    return result;
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}