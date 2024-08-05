#include <iostream>
#include <string>

bool simplify(std::string x, std::string n) {
    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    return (num1 * den2 == num2 * den1);
}

int main() {
    std::string fraction1, fraction2;
    std::cout << "Enter the first fraction in the format 'numerator/denominator': ";
    std::cin >> fraction1;

    std::cout << "Enter the second fraction in the format 'numerator/denominator': ";
    std::cin >> fraction2;

    bool result = simplify(fraction1, fraction2);

    if (result) {
        std::cout << "Fractions are equivalent." << std::endl;
    } else {
        std::cout << "Fractions are not equivalent." << std::endl;
    }

    return 0;
}