#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<int>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return a.convert_to<std::string>() > b.convert_to<std::string>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > std::stoi(y) ? a : boost::any("None");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        std::string y = boost::any_cast<std::string>(a);
        return std::stoi(y) > x ? a : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > std::stof(y) ? a : boost::any("None");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(b);
        std::string y = boost::any_cast<std::string>(a);
        return std::stof(y) > x ? a : boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else {
        return boost::any("None");
    }
}

int main() {
    std::cout << "Enter two values: ";
    int val1, val2;
    std::cin >> val1 >> val2;

    boost::any a = val1;
    boost::any b = val2;

    boost::any result = compare_one(a, b);

    if (result.type() == typeid(int)) {
        std::cout << "Greater value: " << boost::any_cast<int>(result) << std::endl;
    }
    else if (result.type() == typeid(std::string)) {
        std::cout << "Equal values" << std::endl;
    }

    return 0;
}