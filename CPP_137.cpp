#include <iostream>
#include <string>
#include <boost/variant.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

int main() {
    std::string a;
    int choice;
    std::cout << "Enter your first value: ";
    std::cin >> a;

    std::cout << "Enter 1 for integer, 2 for float, 3 for string: ";
    std::cin >> choice;

    variant x;
    if (choice == 1) {
        int b;
        std::cout << "Enter your second value: ";
        std::cin >> b;
        x = b;
    }
    else if (choice == 2) {
        float c;
        std::cout << "Enter your second value: ";
        std::cin >> c;
        x = c;
    }
    else {
        std::cout << "Enter your string value: ";
        std::cin.ignore();
        std::getline(std::cin, a);
        x = a;
    }

    variant y;
    if (choice == 1) {
        int b;
        std::cout << "Enter your third value: ";
        std::cin >> b;
        y = b;
    }
    else if (choice == 2) {
        float c;
        std::cout << "Enter your third value: ";
        std::cin >> c;
        y = c;
    }
    else {
        std::cout << "Enter your string value: ";
        std::cin.ignore();
        std::getline(std::cin, a);
        y = a;
    }

    std::string result = boost::get<std::string>(compare_one(x, y));
    if (!result.empty())
        std::cout << result << std::endl;

    return 0;
}

variant< int|string|float > compare_one(variant< int|string|float > a, variant< int|string|float > b) {
    if (holds_alternative<int>(a) && holds_alternition<float>(b)) {
        return "1";
    }
    else if (holds_alternative<int>(a) && holds_alternation<std::string>(b)) {
        if(get<int>(a) < 0)
            return "Negative integer is less than string";
        else
            return "Positive integer is greater than or equal to string";
    }
    else if (holds_alternative<int>(a) && holds_alternation<int>(b)) {
        int x = get<int>(a);
        int y = get<int>(b);
        if(x < y)
            return "Integer 1 is less than Integer 2";
        else if(x > y)
            return "Integer 1 is greater than Integer 2";
        else
            return "Integers are equal";
    }
    else if (holds_alternative<float>(a) && holds_alternation<float>(b)) {
        float x = get<float>(a);
        float y = get<float>(b);
        if(x < y)
            return "Float 1 is less than Float 2";
        else if(x > y)
            return "Float 1 is greater than Float 2";
        else
            return "Floats are equal";
    }
    else if (holds_alternative<std::string>(a) && holds_alternation<std::string>(b)) {
        std::string strA = get<std::string>(a);
        std::string strB = get<std::string>(b);
        if(strA > strB)
            return "String 1 is greater than String 2";
        else if(strA < strB)
            return "String 1 is less than String 2";
        else
            return "Strings are equal";
    }
    else {
        return "Invalid input";
    }
}