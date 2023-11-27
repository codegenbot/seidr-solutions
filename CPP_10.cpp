#include <iostream>
#include <algorithm>
#include <cassert>

std::string make_palindrome(std::string str);

std::string make_palindrome(std::string str){
    int n = str.length();
    std::string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());
    std::string palindrome = str + rev_str.substr(1, n-1);
    return palindrome;
}