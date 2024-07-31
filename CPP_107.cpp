#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string str = std::to_string(i);
        std::string revStr = str;
        std::reverse(revStr.begin(), revStr.end());
        if (str == revStr) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));

    return 0;
}