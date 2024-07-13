#include <iostream>
#include <string>

int romanToInt(int n) {
    std::string thousands = (n >= 1000) ? "M" : "";
    int roman = 0;
    if (n >= 1000) {
        roman += 1000;
        n -= 1000;
    }
    
    std::string hundreds = (n >= 100) ? ((n < 400) ? "C" : "D") : "";
    if (n >= 100) {
        roman += 100;
        n -= 100;
    }
    
    std::string tens = (n >= 10) ? ((n < 50) ? "X" : "L") : "";
    if (n == 9 || n == 90) {
        roman += 9;
    } else if (n >= 10 && n <= 39) {
        roman += 40 - n;
    } else {
        roman += n * 10;
        n = 0;
    }
    
    std::string ones = (n > 3) ? "IV" : ((n == 4) ? "IV" : ((n < 5) ? "" : "V"));
    if (n > 3 || (n >= 4 && n <= 39)) {
        roman += 1;
        n -= 1;
    }
    
    for (; n > 0; --n) {
        ones = "I" + ones;
    }
    
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