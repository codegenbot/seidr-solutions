#include <boost/any.hpp>
#include <cassert>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <string_view>

template <typename T>
boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(T) && boost::any_cast<T>(a) != boost::any_cast<T>(b)) {
            return (boost::any_cast<T>(a) > boost::any_cast<T>(b)) ? a : b;
        }
    }
    return boost::any();
}