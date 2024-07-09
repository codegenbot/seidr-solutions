#include <string> // Include the string header file

std::string make_palindrome(std::string str){ // Use std::string instead of string
    std::string rev_str(str.rbegin(), str.rend());
    std::string palindrome = str;
    for (int i = 0; i < str.length(); ++i) {
        if (str.substr(0, str.length() - i) == rev_str.substr(i)) {
            palindrome = str + rev_str.substr(0, i);
            break;
        }
    }
    return palindrome;
}

int main(){
    assert (make_palindrome("jerry") == "jerryrrej");
    return 0;
}