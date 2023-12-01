#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        std::string num = std::to_string(i);
        int len = num.length();
        bool isPalindrome = true;

        for (int j = 0; j < len / 2; j++) {
            if (num[j] != num[len - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    return {even, odd};
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));

    return 0;
}