```cpp
#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (std::isdigit(c) && (c >= '2' && c <= '7')) {
            count++;
        } else if ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
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
    return 0;
}