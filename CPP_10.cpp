#include <string>

bool is_palindrome(const std::string &str){
    for (int i = 0; i < str.size()/2; ++i) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

std::string make_palindrome(const std::string &str);

int main() {
    std::string input;
    std::cin >> input;
    std::string result = make_palindrome(input);
    std::cout << result;
    return 0;
}

std::string make_palindrome(const std::string &str){
    std::string palindrome = str;
    for (int i = str.size() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += std::string(str.rbegin(), str.rbegin() + i);
            break;
        }
    }
    return palindrome;
}