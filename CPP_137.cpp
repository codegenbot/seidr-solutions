#include <iostream>
#include <string>
#include <float.h>

bool compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = std::any_cast<int>(a);
        float y = std::any_cast<float>(b);
        return x > y;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = std::any_cast<int>(a);
        std::string y = std::any_cast<std::string>(b);
        return std::stoi(y) > x;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = std::any_cast<float>(a);
        int y = std::any_cast<int>(b);
        return x > y;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = std::any_cast<float>(a);
        std::string y = std::any_cast<std::string>(b);
        return std::stof(y) > x;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = std::any_cast<std::string>(a);
        int y = std::any_cast<int>(b);
        return std::stof(x) > y;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string x = std::any_cast<std::string>(a);
        float y = std::any_cast<float>(b);
        return std::stof(x) > y;
    }
    else if (a.type() == typeid(int) && a.type() == typeid(int)) {
        int x = std::any_cast<int>(a);
        int y = std::any_cast<int>(b);
        return x > y;
    }
    else if (std::any_cast<std::string>(a) == "0" && std::any_cast<std::string>(b) == "0") {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    std::any a = 5; // replace with your input
    std::any b = "3.14"; // replace with your input
    
    if (compare_one(a, b)) {
        std::cout << "a is greater than or equal to b" << std::endl;
    }
    else {
        std::cout << "b is greater than a" << std::endl;
    }

    return 0;
}