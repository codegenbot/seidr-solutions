#include <boost/any/any.hpp>
#include <string>

template<typename T>
T compare(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return compare(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return compare(boost::any_cast<float>(a), boost::any_cast<float>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return compare(boost::any_cast<std::string>(a), boost::any_cast<std::string>(b));
    }
    return boost::any();
}