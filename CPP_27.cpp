```cpp
#include <cassert>
#include <algorithm>
#include <string>
#include <initializer_list>
#include <iostream>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            result += (char)(c + 32);
        } else if (c >= 'a' && c <= 'z') {
            result += (char)(c - 32);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << filp_case(input) << std::endl;
    return 0;
}