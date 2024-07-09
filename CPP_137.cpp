```
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b)
            ? a
            : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b) > any_cast<int>(a)
            ? b
            : boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<float>(b)
            ? a
            : boost::any("None");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string a_str = any_cast<std::string>(a);
        std::string b_str = any_cast<std::string>(b);
        return stof(b_str) > stof(a_str)
            ? a
            : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return stof(any_cast<std::string>(b)) > any_cast<float>(a)
            ? b
            : boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return any_cast<float>(a) > stof(any_cast<std::string>(b))
            ? a
            : boost::any("None");
    }
    return boost::any("None");
}