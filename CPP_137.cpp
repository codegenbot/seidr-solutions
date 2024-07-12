#include <boost/any.hpp>
#include <string>

bool operator<(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = std::any_cast<std::string>(a);
        std::string y = std::any_cast<std::string>(b);
        return x < y;
    }
    else
        throw std::runtime_error("Invalid types");
}