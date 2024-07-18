#include <vector>
#include <cassert>

std::pair<int, int> countPalindromeNumbers(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev = num;
        std::reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return {even, odd};
}