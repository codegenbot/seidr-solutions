```cpp
#include <iostream>
#include <string>
#include <cassert>

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

int main_function() {
    std::string input;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> input;
    int result = hex_key(input);
    std::cout << "Number of characters in the given string is: " << result << "\n";
    return 0;
}