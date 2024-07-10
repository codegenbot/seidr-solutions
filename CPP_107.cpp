#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<int> even_odd_palindrome(int n) {
    int evp = 0;
    int ovp = 0;
    for (int i = 1; i <= n; ++i) {
        if (isEven(i)) {
            ++evp;
        } else if (isPalindrome(i)) {
            ++ovp;
        }
    }
    return {evp, ovp};
}

bool isEven(int num) {
    return (num & 0x01);
}

bool isPalindrome(int num) {
    int rev = 0, original = num;
    while (original > 0) {
        int digit = original % 10;
        rev = rev * 10 + digit;
        original /= 10;
    }
    return (rev == num);