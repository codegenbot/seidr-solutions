#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> even_odd_palindrome(int n) {
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