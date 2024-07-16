#include <iostream>
#include <boost/any.hpp>
#include <algorithm>
#include <cassert>
#include <string>

using std::string;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);

        if (str_a.find(",") != string::npos) {
            std::replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if (str_b.find(",") != string::npos) {
            std::replace(str_b.begin(), str_b.end(), ',', '.');
        }

        float num1 = std::stof(str_a);
        float num2 = std::stof(str_b);

        return num1 > num2 ? a : (num1 < num2 ? b : boost::any());
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1.2"), string("3.4"))) == "1.2");
    assert(boost::any_cast<float>(compare_one(1, 3.4f)) == 3.4f);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}