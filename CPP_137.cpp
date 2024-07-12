#include <boost/any.hpp>
#include <iostream>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else
            return std::string("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
        else
            return std::string("None");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float a_float = std::stof(boost::any_cast<std::string>(a));
        float b_float = std::stof(boost::any_cast<std::string>(b));
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
        else
            return std::string("None");
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) ||
             (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        float a_float = stof(a.type() == typeid(int) ? std::to_string(boost::any_cast<int>(a)) :
                                                        boost::any_cast<std::string>(a));
        float b_float = stof(b.type() == typeid(int) ? std::to_string(boost::any_cast<int>(b)) :
                                                        boost::any_cast<std::string>(b));
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
        else
            return std::string("None");
    }
    return std::string("None");
}