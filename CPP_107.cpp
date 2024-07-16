#include <vector>
#include <algorithm>
#include <string>

std::vector<int> even_odd_palindrome(int n){
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string s = std::to_string(i);
        std::string rev_s = s;
        std::reverse(rev_s.begin(), rev_s.end());
        if (s == rev_s) {
            if (i % 2 == 0) even++;
            else odd++;
        }
    }
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}