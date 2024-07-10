#include <string>
#include <algorithm>

bool checkDivisibility(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) return false;

    return (num1 * num2) % (den1 * den2) == 0;
}

bool simplify(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) return false;

    int gcd = std::__gcd(num1 * den2, num2 * den1);
    num1 /= gcd;
    den1 /= gcd;

    return num1 == num2 && den1 == den2;
}