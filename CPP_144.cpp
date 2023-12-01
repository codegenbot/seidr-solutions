#include <string>

bool simplify(std::string x, std::string n){
    int num1 = std::stoi(x.substr(0, x.find('/')));
    int den1 = std::stoi(x.substr(x.find('/') + 1));
    int num2 = std::stoi(n.substr(0, n.find('/')));
    int den2 = std::stoi(n.substr(n.find('/') + 1));

    int productNum = num1 * num2;
    int productDen = den1 * den2;

    return (productNum % productDen == 0);
}