#include <iostream>
#include <string>
#include <boost/any.hpp>

std::string compare(std::string a, std::string b) {
    if (a.size() > b.size()) {
        return "String";
    } else if (b.size() > a.size()) {
        return "String";
    }
    return "None";
}

int main() {
    std::string a;
    std::string b;
    
    // Input from user
    std::cout << "Enter string1: ";
    std::getline(std::cin, a);
    std::cout << "Enter string2: ";
    std::getline(std::cin, b);

    // Call function to compare and print the result
    std::string res = compare(a, b);

    // Output
    if (res == "String") {
        if (a.size() > b.size())
            std::cout << a << " is larger than " << b;
        else if (b.size() > a.size())
            std::cout << b << " is larger than " << a;
        else
            std::cout << "Both strings have the same size";
    } else {
        std::cout << res;
    }

    return 0;
}