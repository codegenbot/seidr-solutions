#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i) {
        std::string str = std::to_string(i);
        std::string rev_str = str;
        std::reverse(rev_str.begin(), rev_str.end());
        if(issame(str, rev_str)) {
            if(i % 2 == 0) {
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}