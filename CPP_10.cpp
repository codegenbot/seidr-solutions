#include <algorithm>
#include <string>

std::string make_palindrome(std::string str) {
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    int i = 0;
    while (i < str.length() && str[i] == rev[rev.length()-1-i]) {
        i++;
    }
    return str.substr(0, i) + rev.substr(rev.length()-i);
}