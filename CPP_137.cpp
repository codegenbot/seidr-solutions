#include <iostream>
#include <any>
#include <algorithm>
#include <cassert>
#include <string>

using std::string;
using std::any;
using std::any_cast;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = any_cast<string>(a);
        string str_b = any_cast<string>(b);

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
    assert(any_cast<string>(compare_one(string("1.2"), string("3.4"))) == "1.2");
    assert(any_cast<float>(compare_one(1, 3.4f)) == 3.4f);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}