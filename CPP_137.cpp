Here is the corrected code:

```cpp
#include <boost/config.hpp>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(b) > boost::any_cast<int>(a)) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        return (strB > strA) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int valA = boost::any_cast<int>(a);
        std::string strB = boost::any_cast<std::string>(b);
        return (strB > std::to_string(valA)) ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string strA = boost::any_cast<std::string>(a);
        int valB = boost::any_cast<int>(b);
        return (strA > std::to_string(valB)) ? a : b;
    } else {
        return "None";
    }
}