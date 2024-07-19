#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return a.convert<std::string>().compare(b.convert<std::string>()) > 0 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return std::stoi(b.convert<std::string>()) > (int)a ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return std::stoi(a.convert<std::string>()) > (int)b ? a : b;
    }
    else {
        return boost::any();
    }
}