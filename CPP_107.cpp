#include <vector>
#include <string>
#include <iostream>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        int len = s.length();
        bool isPalindrome = true;
        for (int j = 0; j < len / 2; j++) {
            if (s[j] != s[len - j - 1]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++;
            }
            else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    assert(even_odd_palindrome(1) == std::vector<int>({ 0, 1 }));
    std::cout << "Test case passed." << std::endl;
    return 0;
}