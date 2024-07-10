#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float f = stof(str);
        return (float) a > f ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float f = stof(str);
        return f > (float) b ? a : b;
    }
    return boost::any("None");
}