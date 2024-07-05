#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (char ch : text) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    assert(remove_vowels("beautiful") == "btfl");
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}