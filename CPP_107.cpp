#include <vector>
#include <string>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        std::string s = std::to_string(i);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}