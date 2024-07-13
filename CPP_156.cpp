```cpp
#include <iostream>
#include <string>

int romanToInt(int n) {
    int roman = 0;
    int thousands = n / 1000;
    roman += thousands * 1000;

    int hundreds = (n % 1000) / 100;
    roman += hundreds * 100;

    int tens = ((n % 1000) % 100) / 10;
    roman += tens * 10;

    int ones = n % 10;
    roman += ones;

    return roman;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << std::endl;
    if (n >= 1 && n <= 3999) {
        std::cout << romanToInt(n) << std::endl;
    } else {
        std::cout << "Invalid Roman numeral conversion" << std::endl;
    }
}