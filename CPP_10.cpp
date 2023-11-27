#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& str);

std::string make_palindrome(std::string str) {
    int n = str.length();
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    for(int i = 0; i < n; i++) {
        if(is_palindrome(str.substr(i))) {
            return str + rev.substr(n - i);
        }
    }
    return "";
}

bool is_palindrome(const std::string& str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    std::string result = make_palindrome(input);
    std::cout << result << std::endl;
    return 0;
}