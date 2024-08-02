#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> even_odd_palindrome(int num) {
    std::vector<int> palindrome;
    if (num % 2 == 0) {
        for (int i = 0; i <= num; ++i) {
            palindrome.push_back(i / 2);
        }
    } else {
        for (int i = 0; i <= num; ++i) {
            palindrome.push_back(i / 2);
        }
    }
    return palindrome;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}