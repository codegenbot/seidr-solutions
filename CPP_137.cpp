#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        return (boost::any_cast<T>(a) > boost::any_cast<T>(b)) ? boost::any_cast<T>(a) : boost::any_cast<T>(b);
    }
    return T();
}