#include <iostream>
#include <string>

bool simplify(const std::string& x, const std::string& n) {
    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));
    
    return (num1 * num2) % (den1 * den2) == 0;
}

int main() {
    std::string input1, input2;
    std::cout << "Enter two fractions (in the form 'numerator/denominator'): ";
    std::cin >> input1 >> input2;

    if (simplify(input1, input2)) {
        std::cout << "The fractions can be simplified.\n";
    } else {
        std::cout << "The fractions cannot be simplified.\n";
    }

    return 0;
}