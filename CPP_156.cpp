```cpp
#include <iostream>
#include <string>

std::string toMiniRomanHelper(int num, std::string str, std::string roman) {
    if (num == 0)
        return str;
    int val = getVal(roman);
    if (num >= val) {
        return toMiniRomanHelper(num - val, str + roman[0], roman.substr(1));
    } else {
        return toMiniRomanHelper(num, str, roman.substr(1));
    }
}

std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "";
    return toMiniRomanHelper(num, "", "MDC");
}

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

int main() {
    int num; // input
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Mini Roman representation is: " << int_to_mini_roman(num) << "\n";
    return 0;
}