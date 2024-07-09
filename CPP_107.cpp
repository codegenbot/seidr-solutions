#include <vector>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i <= n; ++i) {
        result.push_back(i % 2);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}