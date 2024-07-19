```cpp
#include <iostream>
#include <string>
#include <boost/any.hpp>

int main() {
    boost::any a = "123";
    boost::any b = "456";

    std::cout << compare_one(a, b) << std::endl;

    return 0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int num1 = boost::any_cast<int>(a);
        float num2 = boost::any_cast<float>(b);

        return num1 > num2 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float num1 = boost::any_cast<float>(a);
        int num2 = boost::any_cast<int>(b);

        return num1 > num2 ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);

        return str1 > str2 ? a : b;
    }
    else {
        return boost::any(typeid(int));
    }
}