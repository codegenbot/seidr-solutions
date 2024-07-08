```cpp
#include <string>
#include <cctype>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!std::iscntrl(c) && !std::islower(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}