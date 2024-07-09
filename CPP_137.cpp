#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    boost::any a;
    boost::any b;

    std::cout << "Enter type of the first value (1 for int, 2 for float, 3 for string): ";
    int typeA;
    std::cin >> typeA;

    if(typeA == 1) {
        int numA;
        std::cout << "Enter integer value: ";
        std::cin >> numA;
        a = boost::any(numA);
    } else if(typeA == 2) {
        float numA;
        std::cout << "Enter float value: ";
        std::cin >> numA;
        a = boost::any(numA);
    } else {
        std::string strA;
        std::cout << "Enter string value: ";
        std::cin.ignore();
        std::getline(std::cin, strA);
        a = boost::any(strA);
    }

    std::cout << "Enter type of the second value (1 for int, 2 for float, 3 for string): ";
    int typeB;
    std::cin >> typeB;

    if(typeB == 1) {
        int numB;
        std::cout << "Enter integer value: ";
        std::cin >> numB;
        b = boost::any(numB);
    } else if(typeB == 2) {
        float numB;
        std::cout << "Enter float value: ";
        std::cin >> numB;
        b = boost::any(numB);
    } else {
        std::string strB;
        std::cout << "Enter string value: ";
        std::cin.ignore();
        std::getline(std::cin, strB);
        b = boost::any(strB);
    }

    if(a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : b;
    } else if(a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    } else if(a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return std::stoi(str) > num ? a : b;
    } else if(a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > static_cast<float>(b) ? a : b;
    } else if(a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > static_cast<double>(b) ? a : b;
    } else if(a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return std::stof(str) > num ? a : b;
    } else if(a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return std::stod(str) > num ? a : b;
    }
    return "None";
}