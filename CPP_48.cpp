#include <string>
#include <algorithm>

bool is_palindrome(string text) {
    string temp = text;
    std::reverse(temp.begin(), temp.end());
    return temp == text;
}