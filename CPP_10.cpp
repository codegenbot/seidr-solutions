#include <string>
#include <cassert>

std::string make_palindrome(std::string str){
    std::string rev_str(str.rbegin(), str.rend());
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(0, str.length() - i) == rev_str.substr(i)) {
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}

assert(make_palindrome("jerry") == "jerryrrej");
return 0;