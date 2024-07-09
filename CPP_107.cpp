#include <vector>
#include <iostream>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2);
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    result[0] = even;
    result[1] = odd;

    return result;
}

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    std::cout << "Even and odd palindromes for the first " << 10 << " numbers are: ";
    std::vector<int> result = even_odd_palindrome(10);
    for (auto i : result) {
        std::cout << i << " ";
    }
    return 0;
}