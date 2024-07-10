#include <string>
#include <stdexcept>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a.convert_to<int>() < (float) b.convert_to<float>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = b.convert_to<std::string>();
        float f = a.convert_to<float>();
        return f > std::stof(str) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.convert_to<std::string>();
        std::string str2 = b.convert_to<std::string>();
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = a.convert_to<int>();
        int i2 = b.convert_to<int>();
        return i1 < i2 ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = a.convert_to<std::string>();
        float f = b.convert_to<float>();
        return std::stof(str) > f ? a : b;
    }
    else {
        throw std::runtime_error("Invalid types");
    }
}