```cpp
#include <iostream>
#include <string>

bool is_happy(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        sum += (c - '0') * (c - '0');
    }
    return sum > 9 ? is_happy(std::to_string(sum)) : true;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (is_happy(input))
        std::cout << "The number is happy.\n";
    else
        std::cout << "The number is not happy.\n";
    return 0;
}