#include <iostream>
#include <vector>

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }
    return n == rev;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (isPalindrome(n) && (n % 2 == 0)) {
        std::cout << "The number is even and palindrome." << std::endl;
    } else {
        std::cout << "The number is not even and palindrome." << std::endl;
    }
    return 0;
}