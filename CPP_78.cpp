```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    std::string result = "";
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            result += c;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            result += c;
        }
    }
    return result.length();
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    int result = hex_key(str);
    if (result > 0) {
        std::cout << "The number of characters that meet the condition is: " << result << std::endl;
    } else {
        std::cout << "Error: The input string does not contain any characters that meet the condition." << std::endl;
    }
    return 0;
}