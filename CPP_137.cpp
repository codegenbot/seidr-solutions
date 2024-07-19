#include <boost/any.hpp>
#include <string>
#include <cassert>

template <typename T>
const boost::any &compare_one(const boost::any &a, const boost::any &b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b))
        return a;
    else if (boost::any_cast<T>(a) < boost::any_cast<T>(b))
        return b;
    else
        return "None";
}

const boost::any &compare(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int))
        return compare_one<int>(a, b);
    else if (a.type() == typeid(float) && b.type() == typeid(float))
        return compare_one<float>(a, b);
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string))
        return compare_one<std::string>(a, b);
    else if (a.type() == typeid(int) && b.type() == typeid(std::string))
        return compare_one<std::string>(b, a);  // Inverted order for string vs int 
    else if (a.type() == typeid(std::string) && b.type() == typeid(int))
        return compare_one<std::string>(a, b);
        
    return "None";
}