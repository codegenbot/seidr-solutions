#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> generatePalindrome(int n) {
    std::vector<int> oddNumbers, evenNumbers;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            evenNumbers.push_back(0);
        else
            oddNumbers.push_back(1);
    }
    for (int i = oddNumbers.size() - 1; i >= 0; --i) {
        result.push_back(oddNumbers[i]);
    }
    for (int i = evenNumbers.size() - 1; i >= 0; --i) {
        if (!result.empty()) {
            result.push_back(evenNumbers[i]);
        }
    }
    return result;
}