#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        std::vector<int> palindrome(n / 2, 1);
        palindrome.push_back(0);
        return palindrome;
    } else {
        std::vector<int> palindrome((n + 1) / 2, 1);
        palindrome.push_back(0);
        return palindrome;
    }
}

int main() {
    assert(is_same(even_odd_palindrome(1), std::vector<int>{0, 1}));
    return 0;
}