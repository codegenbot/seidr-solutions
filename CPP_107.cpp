#include <iostream>
#include <vector>
#include <string>

bool is_same(const vector<int>& a, const vector<int>& b) {
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

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
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
            }
            else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    vector<int> expected = { 0, 0 };
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    vector<int> result = even_odd_palindrome(n);
    if (is_same(result, expected)) {
        std::cout << "Test case passed." << std::endl;
    }
    else {
        std::cout << "Test case failed." << std::endl;
    }
    return 0;
}