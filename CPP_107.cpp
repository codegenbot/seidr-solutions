#include <vector>
#include <string>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev = num;
        std::reverse(rev.begin(), rev.end());
        if (num == rev) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}