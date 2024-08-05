#include <vector>

bool issame(int a) {
    return a % 2 == 0;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        std::string str = std::to_string(i);
        std::string rev_str = str;
        std::reverse(rev_str.begin(), rev_str.end());
        if (str == rev_str) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}