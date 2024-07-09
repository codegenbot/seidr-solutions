```
#include <string>
#include <iostream>

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
    std::string input;
    std::cin >> input;

    int output = hex_key(input);
    std::cout << output << std::endl;

    return 0;
}