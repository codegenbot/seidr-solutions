#include <iostream>

int toMiniRoman(int num);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The mini Roman numeral is: " << toMiniRoman(num) << "\n";
    return 0;
}