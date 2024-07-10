#include <string>
#include <algorithm>
#include <iostream>

bool checkDivisibility(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        std::cerr << "Invalid input format. Please provide fractions in the format 'numerator/denominator'.\n";
        return false;
    }

    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        std::cerr << "Division by zero error. Denominator cannot be zero.\n";
        return false;
    }

    return (num1 * num2) % (den1 * den2) == 0;
}

bool simplify(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        std::cerr << "Invalid input format. Please provide fractions in the format 'numerator/denominator'.\n";
        return false;
    }

    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        std::cerr << "Division by zero error. Denominator cannot be zero.\n";
        return false;
    }

    int gcd = std::__gcd(num1 * den2, num2 * den1);
    num1 /= gcd;
    den1 /= gcd;

    return num1 == num2 && den1 == den2;
}