#include <iostream>
#include <string>
#include <algorithm>
#include <any>
using namespace std;

std::any string_to_number(const std::string& s) {
    std::string s_copy = s;
    std::replace(s_copy.begin(), s_copy.end(), ',', '.');
    try {
        return std::stod(s_copy);
    } catch (const std::invalid_argument&) {
        return s; // If conversion fails, return original string
    }
}

std::any compare_one(std::any a, std::any b) {
    auto get_value = [](const std::any& v) -> std::any {
        if (v.type() == typeid(int)) return std::any_cast<int>(v);
        if (v.type() == typeid(float)) return std::any_cast<float>(v);
        if (v.type() == typeid(double)) return std::any_cast<double>(v);
        if (v.type() == typeid(std::string)) return string_to_number(std::any_cast<std::string>(v));
        return v;
    };

    auto va = get_value(a);
    auto vb = get_value(b);

    if (va.type() == typeid(double) && vb.type() == typeid(double)) {
        double da = std::any_cast<double>(va);
        double db = std::any_cast<double>(vb);
        if (da == db) return "None";
        return da > db ? a : b;
    }

    if (va.type() == typeid(std::string) && vb.type() == typeid(std::string)) {
        string sa = std::any_cast<std::string>(va);
        string sb = std::any_cast<std::string>(vb);
        if (sa == sb) return "None";
        return sa > sb ? a : b;
    }

    if (va.type() == typeid(double) && vb.type() == typeid(std::string)) {
        return a;
    }

    if (va.type() == typeid(std::string) && vb.type() == typeid(double)) {
        return b;
    }

    return "None"; // Different types or unable to compare
}

int main() {
    // Example usage 1
    std::any result = compare_one(std::string("10"), std::string("25"));
    if (result.type() == typeid(std::string))
        std::cout << std::any_cast<std::string>(result) << std::endl;
    else if (result.type() == typeid(double))
        std::cout << std::any_cast<double>(result) << std::endl;

    // Example usage 2
    result = compare_one("1", 1);
    if (result.type() == typeid(std::string))
        std::cout << std::any_cast<std::string>(result) << std::endl;
    else if (result.type() == typeid(double))
        std::cout << std::any_cast<double>(result) << std::endl;

    return 0;
}