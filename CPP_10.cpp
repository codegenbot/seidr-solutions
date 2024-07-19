#include <string>
#include <cassert>

std::string make_palindrome(std::string str);

std::string make_palindrome(std::string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] == str[n - 1]) {
        i--;
    }
    std::string suffix = str.substr(i + 1);
    std::string prefix = str.substr(0, i + 1);
    std::string reversed_prefix(prefix.rbegin(), prefix.rend());
    return str + reversed_prefix;
}