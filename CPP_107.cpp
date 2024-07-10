```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

int even_odd_palindrome(int n) {
    int countEven = 0;
    int countOdd = 0;

    for(int i = 1; i <= n; ++i) {
        bool isPalindrome = true;
        int reversedNumber = i;

        while(reversedNumber > 9) {
            reversedNumber = (reversedNumber % 10) + (reversedNumber / 10) * 10;
            if(i != reversedNumber)
                isPalindrome = false;
        }

        if(isPalindrome && i % 2 == 0)
            ++countEven;
        else if(isPalindrome)
            ++countOdd;
    }

    std::vector<int> result(2);
    result[0] = countEven;
    result[1] = countOdd;

    return result[0];
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::vector<int> result(2);
    result = even_odd_palindrome(n);

    std::cout << "Number of even palindromes: " << result[0] << std::endl;
    std::cout << "Number of odd palindromes: " << result[1] << std::endl;
}