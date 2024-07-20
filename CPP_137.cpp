```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)boost::get<int>(a) > (int)boost::get<int>(b)
            ? b
            : ((int)boost::get<int>(a) == (int)boost::get<int>(b)) ? boost::any("None") : a;
    } else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(double))) {
        return (float)boost::get<int>(a) > boost::get<float>(b)
            ? b
            : ((float)boost::get<int>(a) == boost::get<float>(b)) ? boost::any("None") : a;
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) && b.type() == typeid(int)) {
        return boost::get<float>(a) > (float)boost::get<int>(b)
            ? b
            : ((float)boost::get<int>(a) == boost::get<float>(b)) ? boost::any("None") : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);

        return stof(str_b) > stof(str_a)
            ? b
            : ((stof(str_a) == stof(str_b)) ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float) || b.type() == typeid(double))) {
        string str_a = boost::any_cast<string>(a);

        return stof(str_a) > boost::get<float>(b)
            ? b
            : ((stof(str_a) == boost::get<float>(b)) ? boost::any("None") : a);
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) && (b.type() == typeid(string))) {
        string str_b = boost::any_cast<string>(b);

        return boost::get<float>(a) > stof(str_b)
            ? b
            : ((boost::get<float>(a) == stof(str_b)) ? boost::any("None") : a);
    } else {
        return "Invalid input";
    }
}