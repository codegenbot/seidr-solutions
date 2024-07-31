#include <boost/any.hpp>
#include <string>

template <typename T>
const T& compare_one(const T& a, const T& b) {
    return (a > b) ? a : b;
}

boost::any compare(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        return compare_one(boost::any_cast<int>(a), boost::any_cast<int>(b));
    }
    if(a.type() == typeid(float) && b.type() == typeid(float)){
        return compare_one(boost::any_cast<float>(a), boost::any_cast<float>(b));
    }
    if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        return compare_one(std::stof(boost::any_cast<std::string>(a)), std::stof(boost::any_cast<std::string>(b)));
    }
    return "None";
}