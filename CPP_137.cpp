```cpp
#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(a) > std::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::any_cast<std::string>(a) > std::any_cast<std::string>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = std::any_cast<int>(a);
        int y = std::stoi(std::any_cast<std::string>(b));
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int x = std::stoi(std::any_cast<std::string>(a));
        int y = std::any_cast<int>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else {
        return boost::any("None");
    }
}

int main() {
    boost::any a = 10;
    boost::any b = "5";
    std::cout << boost::any_cast<std::string>(compare_one(a, b)) << std::endl;
    return 0;
}