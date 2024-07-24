#include <boost/any.hpp>
#include <algorithm>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a == b) return "None";
    
    if (a.type() == typeid(int) && b.type() == typeid(float)) return std::max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    if (a.type() == typeid(float) && b.type() == typeid(int)) return std::max(boost::any_cast<float>(a), boost::any_cast<int>(b));
    if (a.type() == typeid(std::string) && b.type() == typeid(int)) return std::max(std::stof(boost::any_cast<std::string>(a)), boost::any_cast<int>(b));
    if (a.type() == typeid(int) && b.type() == typeid(std::string)) return std::max(boost::any_cast<int>(a), std::stof(boost::any_cast<std::string>(b)));
    if (a.type() == typeid(std::string) && b.type() == typeid(float)) return std::max(std::stof(boost::any_cast<std::string>(a)), boost::any_cast<float>(b));
    if (a.type() == typeid(float) && b.type() == typeid(std::string)) return std::max(boost::any_cast<float>(a), std::stof(boost::any_cast<std::string>(b));
    
    return "None";
}