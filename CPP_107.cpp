#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::pair<int, int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    // Your existing code for even_odd_palindrome function
    return {even, odd};
}

int main() {
    assert(issame(std::vector<int>{even_odd_palindrome(1).first, even_odd_palindrome(1).second}, std::vector<int>{0, 1}));
    return 0;
}