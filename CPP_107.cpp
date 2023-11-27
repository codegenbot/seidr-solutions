#include <vector>
#include <string>
#include <iostream>

bool is_same_vector(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);

    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        int len = s.length();
        bool isPalindrome = true;

        for (int j = 0; j < len / 2; j++) {
            if (s[j] != s[len - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }

    return result;
}

bool is_same_vector(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> expected = { 0, 1 };
    std::vector<int> result = even_odd_palindrome(1);

    if (is_same_vector(result, expected)) {
        std::cout << "Test case passed." << std::endl;
    } else {
        std::cout << "Test case failed." << std::endl;
    }
    
    return 0;
}