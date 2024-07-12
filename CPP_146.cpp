```cpp
#include <iostream>
#include <string>

int specialFilter(int num) {
    std::string num_str = std::to_string(abs(num));
    if (num_str.find_first_not_of("0123456789") == std::string::npos && 
        (num_str[1] - '0') % 2 != 0 && (num_str[0] - '0') % 2 != 0) {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(specialFilter(num)) {
        std::cout << "The number is special." << std::endl;
    } else {
        std::cout << "The number is not special." << std::endl;
    }
    return 0;
}