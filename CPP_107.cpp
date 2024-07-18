#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    result.push_back(0);
    if (n > 0) {
        result.push_back(1);
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