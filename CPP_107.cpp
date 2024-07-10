#include <vector>
#include <cassert>

namespace contest {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> even_odd_palindrome(int n) {
        std::vector<int> result;
        
        for (int i = 1; i <= n; ++i) {
            result.push_back(i);
        }
        
        for (int i = n - 1; i >= 1; --i) {
            result.push_back(i);
        }
        
        return result;
    }
}

int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), {1, 1}));
    assert(contest::issame(contest::even_odd_palindrome(3), {1, 2, 3, 3, 2, 1}));
    
    return 0;
}