#include <variant>
#include <string>
#include <iostream>

std::variant<int, double, std::string> compare_one(std::variant<int, double, std::string> a, std::variant<int, double, std::string> b) {
    if (a.index() == 0 && b.index() == 1) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.index() == 1 && b.index() == 0) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.index() == 2 && b.index() == 1) {
        std::string str = std::get<std::string>(a);
        double num = std::get<double>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (a.index() == 1 && b.index() == 2) {
        std::string str = std::get<std::string>(b);
        double num = std::get<double>(a);
        return std::to_string(num) > str ? a : b;
    }
    else if (a.index() == 2 && b.index() == 0) {
        std::string str = std::get<std::string>(a);
        int num = std::get<int>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (a.index() == 0 && b.index() == 2) {
        int num = std::get<int>(a);
        std::string str = std::get<std::string>(b);
        return std::to_string(num) > str ? a : b;
    }
    else if (a.index() == 2 && b.index() == 1) {
        std::string str1 = std::get<std::string>(a);
        double num = std::get<double>(b);
        return str1 > std::to_string(num) ? a : b;
    }
    else if (a.index() == 1 && b.index() == 2) {
        double num = std::get<double>(a);
        std::string str = std::get<std::string>(b);
        return std::to_string(num) > str ? a : b;
    }
    else {
        return a;
    }
}