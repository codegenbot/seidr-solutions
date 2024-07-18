#include <iostream>
#include <vector>
#include <algorithm>

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

int main() {
    std::pair<int, int> result = even_odd_palindrome(1);
    std::cout << (issame(result, std::vector<int>{0, 1}) ? "Pass" : "Fail") << std::endl;
    return 0;
}