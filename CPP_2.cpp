```
#include <iostream>
#include <cmath>

float truncate_number(float number) {
    return std::fmod(number, 1);
}

int get_user_input() {
    float number;
    std::cout << "Enter a positive floating point number: ";
    std::cin >> number;
    return truncate_number(number);
}

int main() {
    int userInput = get_user_input();
    std::cout << "The decimal part of the number is: " << userInput << std::endl;
    return 0;
}
```