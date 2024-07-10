#include <vector>
#include <cassert>

namespace contest {
    std::vector<int> even_odd_palindrome(int n) {
        std::vector<int> result;
        // Add even and odd numbers up to n in palindrome order
        for (int i = n % 2 == 0 ? 2 : 1; i <= n; i += 2) {
            result.push_back(i);
        }
        for (int i = n; i >= (n % 2 == 0 ? 2 : 1); i -= 2) {
            result.push_back(i);
        }
        return result;
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), {1, 1}));
    assert(contest::issame(contest::even_odd_palindrome(3), {3, 2, 1, 1, 2, 3}));

    return 0;
}