#include <any>
#include <string>
#include <iostream>
#include <cassert> // Include for assert function

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = std::any_cast<int>(a);
        int int_b = std::any_cast<int>(b);
        return (int_a > int_b) ? int_a : int_b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = std::any_cast<float>(a);
        float float_b = std::any_cast<float>(b);
        return (float_a > float_b) ? float_a : float_b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = std::any_cast<string>(a);
        string str_b = std::any_cast<string>(b);
        if (str_a.find_first_of(".,") != string::npos) {
            str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
            str_a.replace(str_a.find('.'), 1, ",");
        }
        if (str_b.find_first_of(".,") != string::npos) {
            str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
            str_b.replace(str_b.find('.'), 1, ",");
        }
        return (stof(str_a) > stof(str_b)) ? str_a : str_b;
    }
    return std::string("None");
}

int main() {
    assert(std::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    return 0;
}