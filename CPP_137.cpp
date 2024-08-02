#include <boost/any.hpp>
#include <cassert>
#include <string>
#include <typeinfo>
#include <cstdlib>

std::string_view compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && boost::any_cast<int>(a) != boost::any_cast<int>(b)) {
            return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? boost::any_cast<int>(a) : boost::any_cast<int>(b);
        } else if (a.type() == typeid(float) && boost::any_cast<float>(a) != boost::any_cast<float>(b)) {
            return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? boost::any_cast<float>(a) : boost::any_cast<float>(b);
        } else if (a.type() == typeid(std::string_view) && boost::any_cast<std::string_view>(a) != boost::any_cast<std::string_view>(b)) {
            return (std::stof(boost::any_cast<std::string_view>(a).data()) > std::stof(boost::any_cast<std::string_view>(b).data())) ? boost::any_cast<std::string_view>(a) : boost::any::cast<std::string_view>(b);
        }
    }
    return "None";
}