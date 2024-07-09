```cpp
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b)
            ? any(a)
            : any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b)
            ? any(a)
            : any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b) > any_cast<int>(a)
            ? any(b)
            : any(any_cast<int>(a));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<float>(b)
            ? any(a)
            : any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = any_cast<string>(a);
        string b_str = any_cast<string>(b);
        return stof(b_str) > stof(a_str)
            ? any(a)
            : any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stof(any_cast<string>(b)) > any_cast<float>(a)
            ? any(b)
            : any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return any_cast<float>(a) > stof(any_cast<string>(b))
            ? any(a)
            : any("None");
    }
    return "None";
}