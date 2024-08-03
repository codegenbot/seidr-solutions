#include <string>

bool is_palindrome(const std::string& str) {
    for (int i = 0; i < str.size() / 2; ++i) {
        if (str[i] != str[str.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

std::string make_palindrome(std::string str);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << make_palindrome(input) << std::endl;
}

std::string make_palindrome(std::string str) {
    std::string rev_str(str.rbegin(), str.rend());
    for (int i = str.size(); i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return str;
}