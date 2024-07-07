```cpp
#include <iostream>
#include <string>

std::string flipCase(const std::string& str) -> const std::string {
    std::string result;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += static_cast<char>(c - 32); // Convert lowercase to uppercase
        } else if (c >= 'A' && c <= 'Z') {
            result += static_cast<char>(c + 32); // Convert uppercase to lowercase
        } else {
            result += c; // Non-alphabetic characters should be appended as is
        }
    }
    return result;
}

int main() {
    try {
        std::cout << flipCase("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flipCase("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}