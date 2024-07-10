```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int even_odd_palindrome(int n) {
    int count_even = 0, count_odd = 0;
    for(int i = 1; i <= n; i++) {
        if(isPalindrome(i)) {
            if(i % 2 == 0) count_even++;
            else count_odd++;
        }
    }
    return {count_even, count_odd};
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

bool isPalindrome(int n) {
    int rev = 0, rem, orig = n;
    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return (rev == orig);
}