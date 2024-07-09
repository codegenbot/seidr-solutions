#include <vector>
#include <iostream>

bool checkPalindrome(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[std::abs(i - (a.size() - 1))]) return false;
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            result.push_back(0);
        else
            result.push_back(1);
    }
    return result;
}

int main() {
    int n = 5;
    std::vector<int> expected = even_odd_palindrome(n);
    
    for(int i = 0; i <= n; ++i) {
        if(i % 2 == 0)
            expected.push_back(0);
        else
            expected.push_back(1);
    }
    
    assert(checkPalindrome(even_odd_palindrome(n), expected));
    std::cout << "The even-odd palindrome for " << n << " is: ";
    for (int i = 0; i < even_odd_palindrome(n).size(); ++i) {
        if(i % 2 == 0)
            std::cout << 0;
        else
            std::cout << 1;
    }
    std::cout << std::endl;
    
    return 0;
}