```cpp
#include <iostream>
#include <string>

std::string int_to_roman(int);

int main() {
    std::cout << int_to_roman(2022) << std::endl;
    return 0;
}

std::string int_to_roman(int n) {
    if (n <= 0)
        return "Input should be a positive integer";
    else if (n >= 4000)
        return int_to_roman(n / 1000) + "M" + int_to_roman(n % 1000);
    else if (n >= 900)
        return "CM" + int_to_roman(n - 900);
    else if (n == 500)
        return "D";
    else if (n >= 400)
        return "CD" + int_to_roman(n - 400);
    else if (n >= 100)
        return int_to_roman(n / 100) + "C" + int_to_roman(n % 100);
    else if (n == 90)
        return "XC";
    else if (n >= 50)
        return "L" + int_to_roman(n - 50);
    else if (n == 40)
        return "XL";
    else if (n >= 10)
        return int_to_roman(n / 10) + "X" + int_to_roman(n % 10);
    else if (n == 9)
        return "IX";
    else if (n >= 5)
        return "V" + int_to_roman(n - 5);
    else if (n == 4)
        return "IV";
    else
        return "I" + int_to_roman(n - 1);
}