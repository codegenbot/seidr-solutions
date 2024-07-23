#include <boost/any.hpp>
#include <string>

std::string compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == b.type()) {
        if(a.type() == typeid(int))
            return "None";
        if(a.type() == typeid(float))
            return std::to_string(std::max(boost::any_cast<float>(a), boost::any_cast<float>(b)));
        if(a.type() == typeid(std::string))
            return (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) ? boost::any_cast<std::string>(a) : boost::any_cast<std::string>(b);
    }
    return "None";
}