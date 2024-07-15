#include <boost/any.hpp>
#include <string>

template<typename T>
const boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return a;
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return b;
        } else {
            return "None";
        }
    }
    return "None";
}

const boost::any compare(const boost::any& a, const boost::any& b) {
    return compare_one<int>(a, b), compare_one<float>(a, b), compare_one<std::string>(a, b);
}