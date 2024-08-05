#include <iostream>
#include <string>

bool simplify(std::string x, std::string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    return (num1 * den2 == num2 * den1);
}

int main() {
    std::string input1, input2;
    std::cout << "Enter numerator/denominator for first fraction: ";
    std::cin >> input1;
    std::cout << "Enter numerator/denominator for second fraction: ";
    std::cin >> input2;

    bool result = simplify(input1, input2);
    std::cout << (result ? "Fractions are equivalent." : "Fractions are not equivalent.") << std::endl;

    return 0;
}