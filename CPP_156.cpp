```cpp
#include <iostream>
#include <string>

int getVal(char c) {
    int val = 0;
    if (c == 'M')
        val = 1000;
    else if (c == 'D')
        val = 500;
    else if (c == 'C')
        val = 100;
    else if (c == 'L')
        val = 50;
    else if (c == 'X')
        val = 10;
    else if (c == 'V')
        val = 5;
    else if (c == 'I')
        val = 1;
    return val;
}

std::string toMiniRomanHelper(int num, std::string str, char roman) {
    if (num == 0)
        return str;
    int val = getVal(roman);
    if (num >= val) {
        return toMiniRomanHelper(num - val, str + roman, roman);
    } else {
        return toMiniRomanHelper(num, str, roman);
    }
}

std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "Nulla";
    if (num == 1)
        return "I";
    if (num == 4)
        return "IV";
    if (num == 5)
        return "V";
    if (num == 9)
        return "IX";
    if (num == 10)
        return "X";
    if (num == 40)
        return "XL";
    if (num == 50)
        return "L";
    if (num == 90)
        return "XC";
    if (num == 100)
        return "C";
    if (num == 400)
        return "CD";
    if (num == 500)
        return "D";
    if (num == 900)
        return "CM";
    if (num == 1000)
        return "M";
    return toMiniRomanHelper(num, "", 'M');
}

int main() {
    int num;
    while(true) {
        std::cout << "Enter a number: ";
        std::cin >> num;
        if(std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        } else
            break;
    }
    std::cout << "Mini Roman representation is: " << int_to_mini_roman(num) << "\n";
    return 0;
}