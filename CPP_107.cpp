#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    
    result.push_back(0);
    if (n > 0)
        result.push_back(1);

    return result;
}

int main() {
    assert(is_same(even_odd_palindrome(1), {0, 1}));
    return 0;
}