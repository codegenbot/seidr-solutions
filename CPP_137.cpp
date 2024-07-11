#include <boost/any.hpp>
#include <typeinfo>
#include <string>
#include <iostream>

template <typename T>
T convert(const boost::any& a) {
    return boost::any_cast<T>(a);
}

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (convert<int>(a) > convert<int>(b)) {
            return a;
        } else if (convert<int>(a) < convert<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (convert<float>(a) > convert<float>(b)) {
            return a;
        } else if (convert<float>(a) < convert<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stof(convert<std::string>(a)) > std::stof(convert<std::string>(b))) {
            return a;
        } else if (std::stof(convert<std::string>(a)) < std::stof(convert<std::string>(b))) {
            return b;
        }
    }
    return boost::any{};
}