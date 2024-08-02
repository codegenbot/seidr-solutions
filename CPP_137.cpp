#include <boost/any.hpp>
#include <boost/convert.hpp>  
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(a) > boost::any_cast<float>(b)) ?
            boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b)) ?
            boost::any(a) : boost::any(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float fa = boost::convert<std::string, float>::from_string(boost::any_cast<std::string>(a)).get();
        return (fa > boost::any_cast<float>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float fb = boost::convert<std::string, float>::from_string(boost::any_cast<std::string>(b)).get();
        return (boost::any_cast<float>(a) > fb) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return (stof(sa) > stof(sb)) ? a : b;
    }
    return boost::any("None");
}