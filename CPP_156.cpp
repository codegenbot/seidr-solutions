#include <iostream>

int romanToInt(int n) {
    int roman = 0;
    while (n > 0) {
        if (n >= 1000) {
            roman += 1000;
            n -= 1000;
        } else if (n >= 900) {
            roman += 900;
            n -= 900;
        } else if (n >= 500) {
            roman += 500;
            n -= 500;
        } else if (n >= 400) {
            roman += 400;
            n -= 400;
        } else if (n >= 100) {
            if (n >= 900) {
                roman += 800;
                n -= 800;
            } else if (n >= 500) {
                roman += 400;
                n -= 400;
            } else {
                roman += 100;
                n -= 100;
            }
        } else if (n >= 90) {
            roman += 90;
            n -= 90;
        } else if (n >= 50) {
            if (n >= 40) {
                roman += 40;
                n -= 40;
            } else {
                roman += 50;
                n -= 50;
            }
        } else if (n >= 10) {
            if (n >= 9) {
                roman += 9;
                n -= 9;
            } else {
                roman += 1;
                n -= 1;
            }
        } else if (n >= 5) {
            roman += 5;
            n -= 5;
        } else {
            roman += 1;
            n -= 1;
        }
    }
    return roman;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << romanToInt(n) << std::endl;
}