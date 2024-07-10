#include <vector>
#include <cassert>

namespace contest {

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> even_odd_palindrome(int n) {
        std::vector<int> palindrome;
        
        for (int i = n; i > 0; --i) {
            palindrome.push_back(i);
        }
        
        for (int i = 1; i <= n; ++i) {
            palindrome.push_back(i);
        }
        
        return palindrome;
    }
}

int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), {1, 1, 1}));
    assert(contest::issame(contest::even_odd_palindrome(3), {3, 2, 1, 1, 2, 3, 3}));
    
    return 0;
}