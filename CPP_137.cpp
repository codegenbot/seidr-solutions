#include <iostream>
#include <string>
#include <boost/variant.hpp>

using namespace boost;

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

    if (holds_alternative<std::string>(x)) {
        std::cout << get<std::string>(x) << std::endl;
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}

variant compare_one(variant a, variant b) {
    if (holds_alternative<int>(a) && holds_alternition<float>(b)) {
        return "1";
    }
    else if (holds_alternative<int>(a) && holds_alternative<std::string>(b)) {
        if (get<int>(a) < 0)
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
    else if (holds_alternation<std::string>(a) && holds_alternation<std::string>(b)) {
        std::string strA = get<std::string>(a);
        std::string strB = get<std::string>(b);
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