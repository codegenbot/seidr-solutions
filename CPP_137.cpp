#include <algorithm>
#include <any>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_val = std::any_cast<int>(a);
        int b_val = std::any_cast<int>(b);
        if (a_val > b_val) {
            return a_val;
        } else if (b_val > a_val) {
            return b_val;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float a_val = std::any_cast<float>(a);
        float b_val = std::any_cast<float>(b);
        if (a_val > b_val) {
            return a_val;
        } else if (b_val > a_val) {
            return b_val;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string a_val = std::any_cast<std::string>(a);
        std::string b_val = std::any_cast<std::string>(b);
        if (a_val > b_val) {
            return a_val;
        } else if (b_val > a_val) {
            return b_val;
        }
    }
    return std::any();
}