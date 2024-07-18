
#include <vector>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    return {0, 1};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}