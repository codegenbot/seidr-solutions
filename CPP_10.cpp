#include <string>

bool is_palindrome(string str){
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

string make_palindrome(string str);

int main() {
    std::string input_str;
    std::cin >> input_str;
    std::cout << make_palindrome(input_str) << std::endl;
    return 0;
}

std::string make_palindrome(std::string str) {
    std::string palindrome = str;
    for (int i = str.size() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += std::string(str.rbegin(), str.rbegin() + i);
            break;
        }
    }
    return palindrome;
}