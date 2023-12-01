#include <vector>
#include <string>

vector<int> even_odd_palindrome(int n) {
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        string num = to_string(i);
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