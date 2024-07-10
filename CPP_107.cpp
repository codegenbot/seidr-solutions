#include <iostream>
#include <vector>

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        if (isPalindrome(i)) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return std::vector<int>({even, odd});
}

bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::vector<int> result = even_odd_palindrome(n);

    std::cout << "Number of even palindromes: " << result[0] << std::endl;
    std::cout << "Number of odd palindromes: " << result[1] << std::endl;
}