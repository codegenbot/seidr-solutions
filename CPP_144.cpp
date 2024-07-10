#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

bool checkDivisibility(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        return false; // Return false if '/' is not found in input strings
    }

    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    int num1 = std::stoi(x.substr(0, x.find('/')));
    int num2 = std::stoi(n.substr(0, n.find('/')));

    return (num1 * num2) % (den1 * den2) == 0;
}

bool simplify(std::string x, std::string n) {
    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    int gcd = std::gcd(num1 * den2, num2 * den1);
    num1 /= gcd;
    den1 /= gcd;

    return num1 == num2 && den1 == den2;
}

int main() {
    std::string x, n;
    std::cout << "Enter two fractions (e.g., 1/2 3/4): ";
    std::cin >> x >> n;

    bool divisibilityResult = checkDivisibility(x, n);
    bool simplifyResult = simplify(x, n);

    std::cout << "Divisibility Check Result: " << divisibilityResult << std::endl;
    std::cout << "Simplify Check Result: " << simplifyResult << std::endl;

    return 0;
}