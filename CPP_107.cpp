#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Declare even_odd_palindrome function here

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}