#include <vector>
#include <cassert>
#include <string>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);
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

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}