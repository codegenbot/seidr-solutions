#include <any>
#include <cassert>
#include <string>
#include <iostream>

std::any compare_one(std::any a, std::any b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string)) {
        float valA = std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float valB = std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? a : valA < valB ? b : "None";
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string))
               || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        float valA = a.type() == typeid(int) ? std::any_cast<int>(a) : std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float valB = b.type() == typeid(int) ? std::any_cast<int>(b) : std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? a : valA < valB ? b : "None";
    }

    return "Error: Invalid types";
}