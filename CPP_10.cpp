#include <string>

std::string make_palindrome(std::string str);

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}