#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

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
    std::vector<int> expected = { 0, 1 };
    assert(is_same(even_odd_palindrome(1), expected));
    std::cout << "Test case passed." << std::endl;
    return 0;
}