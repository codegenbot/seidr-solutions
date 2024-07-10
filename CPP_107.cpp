#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num_str = std::to_string(i);
        std::string rev_num_str = num_str;
        std::reverse(rev_num_str.begin(), rev_num_str.end());
        if (num_str == rev_num_str) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    return {even_count, odd_count};
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}