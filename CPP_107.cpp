#include <vector>
#include <cassert>

bool are_vectors_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(are_vectors_equal(even_odd_palindrome(1), {0, 1}));
    return 0;
}