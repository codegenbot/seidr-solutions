#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return boost::any_cast<T>(a);
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return boost::any_cast<T>(b);
        }
    }
    return T();
}

boost::any compare(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return compare_one<int>(a, b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return compare_one<float>(a, b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return compare_one<std::string>(a, b);
    }
    return "None";
}