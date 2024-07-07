```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (std::isxdigit(c)) {
            count++;
        }
    }
    return count;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    int result = hex_key(str);
    std::cout << "Number of hexadecimal digits: " << result << std::endl;
    return 0;
}