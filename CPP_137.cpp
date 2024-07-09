```cpp
#include <iostream>
#include <string>
#include <boost/variant.hpp>

int main() {
    std::string a;
    int choice;
    std::cout << "Enter your first value: ";
    std::cin >> a;

    std::cout << "Enter 1 for integer, 2 for float, 3 for string: ";
    std::cin >> choice;

    boost::variant<int, float, std::string> x = static_cast<boost::variant<int, float, std::string>>(choice);

    if (choice == 1) {
        std::string b;
        std::cout << "Enter your second value: ";
        std::cin >> b;
        boost::variant<int, float, std::string> y = static_cast<boost::variant<int, float, std::string>>(b);
        x = compare_one(x, y);
    }
    else if (choice == 2 || choice == 3) {
        float c;
        if (choice == 2) 
            std::cout << "Enter your second value: ";
        else
            std::cout << "Enter your string value: ";
        
        std::cin >> c;
        boost::variant<int, float, std::string> z = static_cast<boost::variant<int, float, std::string>>(c);
        x = compare_one(x, z);
    }

    if (boost::holds_alternative<std::string>(x)) {
        std::cout << boost::get<std::string>(x) << std::endl;
    }
    else if (boost::holds_alternative<int>(x)) {
        int value = boost::get<int>(x);
        if(value == 1)
            std::cout << "Integer 1 is less than Integer 2" << std::endl;
        else if(value > 1)
            std::cout << "Integer 1 is greater than or equal to Integer 2" << std::endl;
        else
            std::cout << "Integers are equal" << std::endl;
    }
    else {
        float value = boost::get<float>(x);
        if(value < 0)
            std::cout << "Float 1 is less than Float 2" << std::endl;
        else if(value > 0)
            std::cout << "Float 1 is greater than or equal to Float 2" << std::endl;
        else
            std::cout << "Floats are equal" << std::endl;
    }

    return 0;
}

boost::variant<std::string, int> compare_one(boost::variant<int, float, std::string> a, boost::variant<int, float, std::string> b) {
    if (std::holds_alternative<int>(a) && std::holds_alternative<float>(b)) {
        return "Integer 1 is less than Float 2";
    }
    else if (std::holds_alternative<int>(a) && std::holds_alternative<std::string>(b)) {
        if (boost::get<int>(a) < 0)
            return "Negative integer is less than string";
        else
            return "Positive integer is greater than or equal to string";
    }
    else if (std::holds_alternative<int>(a) && std::holds_alternative<int>(b)) {
        int x = boost::get<int>(a);
        int y = boost::get<int>(b);
        if(x < y)
            return "Integer 1 is less than Integer 2";
        else if (x > y)
            return "Integer 1 is greater than or equal to Integer 2";
        else
            return "Integers are equal";
    }
    else if (std::holds_alternative<float>(a) && std::holds_alternative<float>(b)) {
        float x = boost::get<float>(a);
        float y = boost::get<float>(b);
        if(x < y)
            return "Float 1 is less than Float 2";
        else if (x > y)
            return "Float 1 is greater than or equal to Float 2";
        else
            return "Floats are equal";
    }
    else if (std::holds_alternative<std::string>(a) && std::holds_alternative<std::string>(b)) {
        std::string strA = boost::get<std::string>(a);
        std::string strB = boost::get<std::string>(b);
        if(strA > strB)
            return "String 1 is greater than String 2";
        else if (strA < strB)
            return "String 1 is less than String 2";
        else
            return "Strings are equal";
    }
    else {
        return "Invalid input";
    }
}