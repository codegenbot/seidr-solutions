```cpp
#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    std::string a;
    int choice;

    std::cout << "Enter '1' to input integer, '2' to input float, '3' to input string: ";
    std::cin >> choice;

    if (choice == 1) {
        int value;
        std::cout << "Enter the integer value: ";
        std::cin >> value;
        boost::any b(value);
    } else if (choice == 2) {
        float value;
        std::cout << "Enter the float value: ";
        std::cin >> value;
        boost::any b(value);
    } else {
        std::string value;
        std::cout << "Enter the string value: ";
        std::getline(std::cin, value);
        boost::any b(value);
    }

    std::cout << "Enter another value: ";
    if (std::cin >> a) {
        int num = stoi(a);
        boost::any c(num);
    } else {
        float f = stof(a);
        boost::any c(f);
    }

    boost::any result = compare_one(b, c);

    if (result.type() == typeid(std::string)) {
        std::cout << "None";
    } else {
        std::cout << boost::any_cast<int>(result) << " > " << boost::any_cast<float>(result);
    }

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return stoi(str) > num ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > (int)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > (int)b ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return stof(str) > num ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return stod(str) > num ? a : b;
    }
    return "None";
}