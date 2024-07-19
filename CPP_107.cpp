#include <vector>

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}