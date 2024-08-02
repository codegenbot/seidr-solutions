```cpp
#include <boost/any.hpp>
#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of_type<double>(a) && is_any_of_type<double>(b)) {
        return (dynamic_cast<any &>(a) > dynamic_cast<any &>(b)) ? a : ((dynamic_cast<any &>(a) == dynamic_cast<any &>(b))) ? any("None") : b;
    } else if (is_any_of_type<std::string>(a) && is_any_of_type<std::string>(b)) {
        return (std::stoi(dynamic_cast<any &>(a).any_to<string>().c_str()) > std::stoi(dynamic_cast<any &>(b).any_to<string>().c_str())) ? a : ((std::stoi(dynamic_cast<any &>(a).any_to<string>().c_str()) == std::stoi(dynamic_cast<any &>(b).any_to<string>().c_str()))) ? any("None") : b;
    } else {
        return any("Invalid input type");
    }
}

template <typename T>
bool is_any_of_type(boost::any a) {
    try {
        if (a.type() == typeid(T)) {
            return true;
        }
    } catch (...) {
        // handle exception
    }
    return false;
}