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

int main_func() {
    std::string num;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> num;
    int result = hex_key(num);
    std::cout << "The number of characters in the range [2-7] or ['B', 'D', 'F'] is: " << result << std::endl;
}