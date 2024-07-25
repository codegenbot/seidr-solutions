#include <iostream>
#include <string>

std::string int_to_roman(int n) {
    std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string result = "";

    for (int i = 0; i < 13; i++) {
        while (n > value[i] - 1) { 
            n -= value[i];
            result += roman[i];
        }
    }

    return result;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if(num < 1 || num > 3999) {
        std::cout << "Please enter a number between 1 and 3999.\n";
        return 0;
    }

    std::cout << int_to_roman(num);
    return 0;
}