```cpp
#include <boost/any.hpp>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);

        if (str1 == "None" || str2 == "None")
            return a;

        double num1 = stod(str1);
        double num2 = stod(str2);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
    else {
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
}