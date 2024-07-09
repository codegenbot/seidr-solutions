#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        if(str_a.find_first_of(".,") != std::string::npos){
            std::replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if(str_b.find_first_of(".,") != std::string::npos){
            std::replace(str_b.begin(), str_b.end(), ',', '.');
        }
        return (std::stod(str_a) > std::stod(str_b)) ? a : b;
    }
    return boost::any("None");
}