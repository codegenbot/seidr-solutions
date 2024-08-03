#include <iostream>
#include <any>
#include <string>
#include <algorithm>

std::any compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (std::any_cast<int>(a) > std::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (std::any_cast<float>(a) > std::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);
        if (strA.find_first_of(".,") != std::string::npos) {
            std::replace(strA.begin(), strA.end(), ',', '.');
        }
        if (strB.find_first_of(".,") != std::string::npos) {
            std::replace(strB.begin(), strB.end(), ',', '.');
        }
        return (std::stod(strA) > std::stod(strB)) ? a : b;
    }
    return std::any(std::string("None"));
}

int main() {
    if (std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "None") {
        std::cout << "Comparison successful!" << std::endl;
    } else {
        std::cout << "Comparison failed!" << std::endl;
    }
    return 0;
}