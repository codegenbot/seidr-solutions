```
#include <boost/any.hpp>
#include <string>
#include <iostream>

int main() {
    int num1;
    double num2;
    std::string str;

    std::cout << "Enter a value (int or string): ";
    boost::any any_val = boost::any(get_value());

    return 0;
}

boost::any get_value() {
    char c;
    do {
        std::cin >> c;
        switch(c) {
            case '1':
                {
                    int i;
                    std::cout << "Enter an integer: ";
                    std::cin >> i;
                    return boost::any(i);
                }
            case '2':
                {
                    double d;
                    std::cout << "Enter a double: ";
                    std::cin >> d;
                    return boost::any(d);
                }
            case '3':
                {
                    std::cout << "Enter a string: ";
                    std::getline(std::cin, str);
                    return boost::any(str);
                }
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    } while(true);
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str_b = boost::any_cast<std::string>(b);
        double num_a = boost::any_cast<double>(a);
        return str_b.size() > std::to_string(num_a).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int num_b = boost::any_cast<int>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double num_b = boost::any_cast<double>(b);
        return str_a.size() > std::to_string(num_b).size() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        return str_a.size() > str_b.size() ? a : b;
    }
    else if (a.convert_to(b) || 
             a.type() == typeid(double) && a.convert_to(b) || 
             a.type() == typeid(std::string) && a.convert_to(b)) {
        return boost::any("None");
    }
    return a > b ? a : b;
}