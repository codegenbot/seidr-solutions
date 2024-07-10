#include <vector>
#include <cassert>

namespace contest {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> even_odd_palindrome(int n) {
        std::vector<int> result;
        
        for (int i = 0; i < n; ++i) {
            result.push_back(i + 1);
        }
        
        for (int i = n - 2; i >= 0; --i) {
            result.push_back(i + 1);
        }
        
        return result;
    }
}

int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), { 1, 1 }));
    assert(contest::issame(contest::even_odd_palindrome(3), { 1, 2, 3, 2, 1 }));
    
    return 0;
}