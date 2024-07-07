```cpp
#include <iostream>
#include <string>

int getVal(std::string s) {
    int val = 0;
    if (s == "M")
        val = 1000;
    else if (s == "D")
        val = 500;
    else if (s == "C")
        val = 100;
    else if (s == "L")
        val = 50;
    else if (s == "X")
        val = 10;
    else if (s == "V")
        val = 5;
    else if (s == "I")
        val = 1;
    return val;
}

std::string toMiniRomanHelper(int num, std::string str, std::string roman) {
    if (num == 0)
        return str;
    int val = getVal(std::string(1, roman[0]));
    if (num >= val) {
        return toMiniRomanHelper(num - val, str + roman[0], roman.substr(1));
    } else {
        return toMiniRomanHelper(num, str, roman.substr(1));
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
    return toMiniRomanHelper(num, "", "MDC");
}

int main() {
    int num; // input
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Mini Roman representation is: " << int_to_mini_roman(num) << "\n";
    return 0;
}