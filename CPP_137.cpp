```cpp
#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b))
        return "None";

    any_cast<double>(a) > any_cast<double>(b)
        ? return a
        : any_cast<std::string>(a) > any_cast<std::string>(b)
            ? return a
            : b;
}