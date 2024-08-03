#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <algorithm>
#include <cmath>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        } else {
            return std::any();
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        } else {
            return std::any();
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float a_float = std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float b_float = std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        if (a_float > b_float) {
            return a;
        } else if (a_float < b_float) {
            return b;
        } else {
            return std::any();
        }
    }
}