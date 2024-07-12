#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    int start = 0;
    if (n % 2 == 0) start = 1;
    
    for (int i = start; i <= n; i += 2) {
        result.push_back(i);
    }
    
    for (int i = n % 2 == 0 ? n - 1 : n - 2; i > 0; i -= 2) {
        result.push_back(i);
    }
    
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}