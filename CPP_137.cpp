Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert_to<string>() > b.convert_to<string>() ? a : (a.convert_to<string>() == b.convert_to<string>() ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return x > std::stoi(y) ? a : (x < std::stoi(y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        string y = boost::any_cast<string>(a);
        return std::stoi(y) > x ? a : (std::stoi(y) < x ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return x > std::stof(y) ? a : (x < std::stof(y) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(b);
        string y = boost::any_cast<string>(a);
        return std::stof(y) > x ? a : (std::stof(y) < x ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
}