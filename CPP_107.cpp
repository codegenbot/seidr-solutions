#include <vector>
#include <cassert>

namespace contest {
    bool issame(std::vector<int> a, std::vector<int> b) {
        if (a.size() != b.size()) {
            return false;
        }
        
        for (size_t i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        
        return true;
    }

    std::vector<int> generate_palindrome(int n) {
        std::vector<int> palindrome;
        for (int i = n; i >= 0; --i) {
            palindrome.push_back(i);
        }
        for (int i = 1; i <= n; ++i) {
            palindrome.push_back(i);
        }
        return palindrome;
    }
}

int main() {
    assert(contest::issame(contest::generate_palindrome(1), {0, 1}));
    // Add more test cases here

    return 0;
}