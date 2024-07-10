#include <string>
#include <algorithm>
#include <numeric>

bool checkDivisibility(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        return false; // Return false if '/' is not found in input strings
    }

    int den1 = stoi(x.substr(x.find('/') + 1));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    int num1 = stoi(x.substr(0, x.find('/')));
    int num2 = stoi(n.substr(0, n.find('/')));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    return (num1 * num2) % (den1 * den2) == 0;
}

bool simplify(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false; // Return false if any denominator is 0
    }

    int gcd = std::gcd(num1 * den2, num2 * den1);
    num1 /= gcd;
    den1 /= gcd;

    return num1 == num2 && den1 == den2;
}