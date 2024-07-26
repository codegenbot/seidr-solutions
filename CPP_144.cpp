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
    std::string x = "2/3";
    std::string n = "4/6";

    bool result = simplify(x, n);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}