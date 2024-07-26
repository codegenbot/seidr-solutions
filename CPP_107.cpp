#include <vector>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b);

    std::vector<int> even_odd_palindrome(int n);

    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }

    std::vector<int> even_odd_palindrome(int n){
        std::vector<int> palindrome;

        for(int i = 0; i <= n; ++i) {
            palindrome.push_back(i);
        }

        for(int i = n - 1; i >= 0; --i) {
            palindrome.push_back(i);
        }

        return palindrome;
    }
}