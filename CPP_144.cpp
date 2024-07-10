#include <string>
#include <numeric>

bool checkDivisibility(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    return (num1 * num2) % (den1 * den2) == 0;
}

bool simplify(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1);
    
    int gcd1 = std::gcd(num1, den1);
    int gcd2 = std::gcd(num2, den2);
    
    num1 /= gcd1;
    den1 /= gcd1;
    num2 /= gcd2;
    den2 /= gcd2;
    
    return num1 == num2 && den1 == den2;
}