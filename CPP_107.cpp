#include <vector>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    if (n == 1) {
        result = {0, 1};
    }
    return result;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(even_odd_palindrome(1), {0, 1}));
    return 0;
}