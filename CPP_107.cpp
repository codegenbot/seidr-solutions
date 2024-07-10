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

    std::vector<int> even_odd_palindrome(int n) {
        std::vector<int> result;
        for (int i = n % 2; i >= 0; --i) {
            result.push_back(i);
        }
        for (int i = 1; i <= n; ++i) {
            result.push_back(i);
        }
        return result;
    }
}

int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), {0, 1}));
    // Add more test cases here

    return 0;
}