#include <boost/any.hpp>
#include <string>
#include <typeinfo>

template<typename T>
boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return a;
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return b;
        }
    }
    return nullptr;
}