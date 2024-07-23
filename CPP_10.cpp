#include <string>
#include <cassert>

std::string make_palindrome(std::string str){
    std::string rev_str(str.rbegin(), str.rend());
    for (int i = str.size() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return str;
}