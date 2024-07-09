Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a
            : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a
            : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b)
            ? a
            : (boost::any_cast<string>(a) < boost::any_cast<string>(b) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? a
            : (boost::any_cast<float>(b) < boost::any_cast<int>(a) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::any_cast<int>(a);
        return a_int > std::stof(boost::any_cast<string>(b))
            ? a
            : (a_int < std::stof(boost::any_cast<string>(b)) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<float>(a) > std::stof(boost::any_cast<string>(b))
            ? a
            : (boost::any_cast<float>(a) < std::stof(boost::any_cast<string>(b)) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return std::stof(a.cast<std::string>()) > boost::any_cast<int>(b)
            ? a
            : (std::stof(a.cast<std::string>()) < boost::any_cast<int>(b) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return std::stof(a.cast<std::string>()) > boost::any_cast<float>(b)
            ? a
            : (std::stof(a.cast<std::string>()) < boost::any_cast<float>(b) ? b : boost::any("None"));
    }
    else {
        return boost::any("None");
    }
}