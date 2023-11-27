#include <iostream>
#include <algorithm>

std::string make_palindrome(std::string str);

int main() {
    std::string input;
    std::cin >> input;
    std::string output = make_palindrome(input);
    std::cout << output;
    return 0;
}

std::string make_palindrome(std::string str){
    int n = str.length();
    std::string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());
    std::string palindrome = str + rev_str.substr(1, n-1);
    return palindrome;
}