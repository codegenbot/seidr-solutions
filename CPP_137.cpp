#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float))
        return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    if (a.type() == typeid(float) && b.type() == typeid(int))
        return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string))
        return (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) ? a : b;
    return boost::any();
}