#include <boost/any.hpp>
#include <string>
#include <cassert>

#include <string>

} else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) {
        return a;
    } else if (boost::any_cast<std::string>(a) < boost::any_cast<std::string>(b)) {
        return b;
    } else {
        return "None";
    }
}