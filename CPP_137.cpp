#include <boost/any.hpp>
#include <string>

template <typename T>
boost::any compare_one(const boost::any &a, const boost::any &b) {
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

// Function signature declaration
template boost::any compare_one<int>(const boost::any &a, const boost::any &b);
template boost::any compare_one<float>(const boost::any &a, const boost::any &b);
template boost::any compare_one<std::string>(const boost::any &a, const boost::any &b);