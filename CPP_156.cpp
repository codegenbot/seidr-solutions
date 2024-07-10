#include <sstream>
#include <iostream>

void int_to_mini_roman(int n) {
    std::string roman;
    if (n > 3999) {
        std::cout << "Number is too large." << std::endl;
        return;
    }
    while (n >= 1000) {
        roman += 'M';
        n -= 1000;
    }
    while (n >= 900) {
        roman += 'CM';
        n -= 900;
    }
    while (n >= 500) {
        roman += 'D';
        n -= 500;
    }
    while (n >= 400) {
        roman += 'CD';
        n -= 400;
    }
    while (n >= 100) {
        if (n >= 900) {
            roman += 'CM';
            n -= 900;
        } else {
            roman += 'C';
            n -= 100;
        }
    }
    while (n >= 90) {
        roman += 'XC';
        n -= 90;
    }
    while (n >= 50) {
        if (n >= 400) {
            roman += 'CD';
            n -= 400;
        } else {
            roman += 'D';
            n -= 50;
        }
    }
    while (n >= 40) {
        roman += 'XL';
        n -= 40;
    }
    while (n >= 10) {
        if (n >= 90) {
            roman += 'XC';
            n -= 90;
        } else {
            roman += 'X';
            n -= 10;
        }
    }
    while (n >= 9) {
        roman += 'IX';
        n -= 9;
    }
    while (n >= 5) {
        if (n >= 40) {
            roman += 'XL';
            n -= 40;
        } else {
            roman += 'V';
            n -= 5;
        }
    }
    while (n >= 4) {
        roman += 'IV';
        n -= 4;
    }
    while (n > 3) {
        roman += 'III';
        n -= 3;
    }
    while (n > 2) {
        roman += 'II';
        n -= 2;
    }
    while (n > 1) {
        roman += 'I';
        n -= 1;
    }
    if (n == 1) {
        roman += 'I';
    } else if (n == 0) {
        roman = "";
    }
    std::cout << roman << std::endl;
}

int main() {
    std::ostringstream oss(std::locale(), std::ios_base::out);
    int n;
    std::cin >> n;
    int_to_mini_roman(n);
}