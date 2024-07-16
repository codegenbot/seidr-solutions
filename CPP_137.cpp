#include <iostream>
#include <any>
#include <algorithm>
#include <cassert>
#include <string>
#include <boost/any.hpp>

using std::any;
using std::string;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = std::any_cast<string>(a);
        string str_b = std::any_cast<string>(b);

        if (str_a.find(",") != string::npos) {
            std::replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if (str_b.find(",") != string::npos) {
            std::replace(str_b.begin(), str_b.end(), ',', '.');
        }

        float num1 = std::stof(str_a);
        float num2 = std::stof(str_b);

        return num1 > num2 ? a : (num1 < num2 ? b : any());
    }
    return any();
}

int main() {
    assert(std::any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    assert(std::any_cast<float>(compare_one(1, 3.4f)) == 3.4f);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}