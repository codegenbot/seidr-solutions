#include <iostream>

bool issame(int a, int b);

int even_odd_palindrome(int n);

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    if (issame(num1, num2)) {
        std::cout << "The numbers are the same.\n";
    } else {
        if (even_odd_palindrome(num1) && even_odd_palindrome(num2)) {
            std::cout << "Both numbers are even palindromes.\n";
        } else if ((num1 % 2 == 0 && num2 % 2 != 0) || (num1 % 2 != 0 && num2 % 2 == 0)) {
            std::cout << "One number is even and the other is odd.\n";
        } else {
            std::cout << "Both numbers are either both even or both odd.\n";
        }
    }

}

bool issame(int a, int b) {
    return (a == b);
}

int even_odd_palindrome(int n) {
    if (n < 0) {
        n = -n;
    }
    
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit != rev) {
            return 0;
        }
        rev = digit;
        n /= 10;
    }
    
    return 1;
}