#include <vector>
#include <cassert>

bool are_vectors_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> palindrome;
    for(int i = 1; i <= n; ++i) {
        palindrome.push_back(i);
    }
    for(int i = n - (n % 2); i > 0; --i) {
        palindrome.push_back(i);
    }
    return palindrome;
}

int main() {
    std::vector<int> result = even_odd_palindrome(2);
    assert(are_vectors_equal(result, even_odd_palindrome(2)));
    return 0;
}