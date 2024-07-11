#include <cassert>
#include <vector>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> counts(2);
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    counts[0] = even_count;
    counts[1] = odd_count;
    return counts;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame(even_odd_palindrome(1), {0, 1}));