#include <any>
#include <string>
#include <iostream>
#include <cassert> // Include assert header

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = std::any_cast<int>(a);
        int int_b = std::any_cast<int>(b);
        return (int_a > int_b) ? int_a : int_b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = std::any_cast<float>(a);
        float float_b = std::any_cast<float>(b);
        return (float_a > float_b) ? float_a : float_b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) { // Corrected string type
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);
        if (str_a.find_first_of(".,") != std::string::npos) {
            str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
            str_a.replace(str_a.find('.'), 1, ",");
        }
        if (str_b.find_first_of(".,") != std::string::npos) {
            str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
            str_b.replace(str_b.find('.'), 1, ",");
        }
        return (stof(str_a) > stof(str_b)) ? str_a : str_b;
    }
    return std::string("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None"); // Correct type and values in assertion
    return 0;
}