```cpp
#include <iostream>
#include <cctype>

bool flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if(std::isalpha(c)) { 
            if (std::isupper(c)) {
                result += std::tolower(c);
            } else if (std::islower(c)) {
                result += std::toupper(c);
            }
        } else { 
            result += c;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if(flip_case(str)) {
        std::cout << "Flipped case: " << str << std::endl;
    } else {
        std::cout << "Error occurred." << std::endl;
    }

    return 0;
}