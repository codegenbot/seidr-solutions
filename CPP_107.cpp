#include <vector>
#include <string>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n);

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num_str = std::to_string(i);
        std::string rev_num_str = num_str;
        std::reverse(rev_num_str.begin(), rev_num_str.end());
        if (issame(num_str, rev_num_str)) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}