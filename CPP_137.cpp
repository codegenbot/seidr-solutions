#include <iostream>
#include <any>
#include <algorithm>
#include <cassert>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);

        if (str_a.find(",") != std::string::npos) {
            std::replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if (str_b.find(",") != std::string::npos) {
            std::replace(str_b.begin(), str_b.end(), ',', '.');
        }

        float num1 = std::stof(str_a);
        float num2 = std::stof(str_b);

        return num1 > num2 ? a : (num1 < num2 ? b : std::any());
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1.2"), std::string("3.4"))) == "1.2");
    assert(std::any_cast<float>(compare_one(1, 3.4f)) == 3.4f);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}