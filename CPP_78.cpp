```
#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    int result = hex_key(str);
    std::cout << "The number of characters in the input string that are valid hexadecimal digits is: " << result << std::endl;
    return 0;
}