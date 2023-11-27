#include <string>

auto compare_one(auto a, auto b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (a > b) {
            return a;
        } else if (a < b) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (a > b) {
            return a;
        } else if (a < b) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = a;
        std::string strB = b;
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        }
    }
    return auto();
}