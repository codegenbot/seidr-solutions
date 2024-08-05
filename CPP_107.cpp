#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i % 2);
        if (i >= 2)
            result.insert(result.begin() + i / 2, i / 2);
    }
    return result;
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 1}));
    assert(is_same(even_odd_palindrome(2), std::vector<int>{0, 0, 1, 1}));
    assert(is_same(even_odd_palindrome(3), std::vector<int>{0, 0, 1, 1, 2, 1}));
    return 0;
}