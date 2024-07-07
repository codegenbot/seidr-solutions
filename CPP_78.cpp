```
#include <iostream>
#include <string>
#include <cctype>

int hex_key(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (std::isxdigit(std::toupper(c))) { 
            result++;
        }
    }
    return result;

}

int main() {
    assert(hex_key("") == 0);
    std::cout << hex_key("hello") << std::endl;
}