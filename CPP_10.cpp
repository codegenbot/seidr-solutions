#include <string>

std::string make_palindrome(std::string str);

std::string make_palindrome(std::string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] != str[0]) i--;
    std::string prefix = str.substr(0, i);
    std::string palindrome_suffix = str.substr(i);
    std::string prefix_reverse(prefix.rbegin(), prefix.rend());
    return str + prefix_reverse;
}