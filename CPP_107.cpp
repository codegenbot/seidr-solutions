#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        std::vector<int> palindrome(n / 2, 0);
        for (int i = 0; i < n / 2; ++i) {
            palindrome[i] = i + 1;
        }
        for (int i = n / 2 - 2; i >= 0; --i) {
            palindrome.push_back(palindrome[i]);
        }
        return palindrome;
    } else {
        std::vector<int> palindrome((n - 1) / 2, 0);
        for (int i = 0; i < (n - 1) / 2; ++i) {
            palindrome[i] = i + 1;
        }
        for (int i = (n - 1) / 2 - 1; i >= 0; --i) {
            palindrome.push_back(palindrome[i]);
        }
        return palindrome;
    }
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0}));
    assert(is_same(even_odd_palindrome(2), std::vector<int>{1, 1}));
    assert(is_same(even_odd_palindrome(3), std::vector<int>{1, 2, 1}));
    assert(is_same(even_odd_palindrome(5), std::vector<int>{1, 2, 3, 2, 1}));
    
    return 0;
}