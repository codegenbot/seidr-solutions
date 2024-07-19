#include <iostream>
#include <string>

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
    std::cout << "Is the number even and palindrome? " << (isPalindrome(n) && (n % 2 == 0)) << std::endl;
    return 0;
}