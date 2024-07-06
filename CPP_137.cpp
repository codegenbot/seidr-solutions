#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int bInt = std::stoi(b.convert_to<std::string>().any_cast<std::string>());
        return a > bInt ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float bFloat = std::stof(b.convert_to<std::string>().any_cast<std::string>());
        return a > bFloat ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int aInt = boost::any_cast<int>(a);
        int bInt = boost::any_cast<int>(b);
        return aInt > bInt ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float aFloat = boost::any_cast<float>(a);
        float bFloat = boost::any_cast<float>(b);
        return aFloat > bFloat ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string aStr = boost::any_cast<std::string>(a);
        std::string bStr = boost::any_cast<std::string>(b);
        return aStr > bStr ? a : b;
    }
    else {
        return "None";
    }
}

int main() {
    boost::any a = 10;
    boost::any b = "20.5";
    std::cout << compare_one(a, b).type() == typeid(std::string) << std::endl;
    return 0;
}