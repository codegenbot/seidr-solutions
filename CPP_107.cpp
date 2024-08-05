#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> res;
    for (int i = 0; i < n/2; ++i) {
        res.push_back(i);
    }
    for (int i = n/2; i >= 0; --i) {
        res.push_back(i);
    }
    return res;
}

assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 1}));