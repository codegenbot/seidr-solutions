#include <vector>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    if (n % 2 == 0) {
        std::vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result[i] = 0;
            } else {
                result[i] = 1;
            }
        }
        return result;
    } else {
        std::vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result[i] = 1;
            } else {
                result[i] = 0;
            }
        }
        return result;
    }
}

int main() {
    assert(is_same(even_odd_palindrome(1), {0, 1}));
    return 0;
}