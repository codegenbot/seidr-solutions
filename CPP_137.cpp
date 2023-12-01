#include <boost/any.hpp>
#include <iostream>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val1 = boost::any_cast<int>(a);
        int val2 = boost::any_cast<int>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val1 = boost::any_cast<float>(a);
        float val2 = boost::any_cast<float>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string val1 = boost::any_cast<std::string>(a);
        std::string val2 = boost::any_cast<std::string>(b);
        if (val1 > val2)
            return val1;
        else if (val1 < val2)
            return val2;
    }
    return nullptr;
}