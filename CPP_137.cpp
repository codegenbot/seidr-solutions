```cpp
#include <iostream>
#include <string>
#include <boost/variant.hpp>

using boost::variant;

int main() {
    std::string a;
    int choice;
    std::cout << "Enter your first value: ";
    std::cin >> a;

    std::cout << "Enter 1 for integer, 2 for float, 3 for string: ";
    std::cin >> choice;

    variant x = choice;

    if (choice == 1) {
        std::string b;
        std::cout << "Enter your second value: ";
        std::cin >> b;
        variant y = b;
        x = compare_one(x, y);
    }
    else if (choice == 2 || choice == 3) {
        float c;
        if (choice == 2) 
            std::cout << "Enter your second value: ";
        else
            std::cout << "Enter your string value: ";
        
        std::cin >> c;
        variant z = c;
        x = compare_one(x, z);
    }

    std::cout << boost::get<std::string>(x) << std::endl;

    return 0;
}

variant compare_one(variant a, variant b) {
    if (boost::holds_alternative<int>(a) && boost::holds_alternative<float>(b)) {
        return "1";
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<std::string>(b)) {
        if (boost::get<int>(a) < 0)
            return "Negative integer is less than string";
        else
            return "Positive integer is greater than or equal to string";
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<int>(b)) {
        int x = boost::get<int>(a);
        int y = boost::get<int>(b);
        if(x < y)
            return "Integer 1 is less than Integer 2";
        else if(x > y)
            return "Integer 1 is greater than Integer 2";
        else
            return "Integers are equal";
    }
    else if (boost::holds_alternative<float>(a) && boost::holds_alternative<float>(b)) {
        float x = boost::get<float>(a);
        float y = boost::get<float>(b);
        if(x < y)
            return "Float 1 is less than Float 2";
        else if(x > y)
            return "Float 1 is greater than Float 2";
        else
            return "Floats are equal";
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        std::string strA = boost::get<std::string>(a);
        std::string strB = boost::get<std::string>(b);
        if (strA > strB)
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