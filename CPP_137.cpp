#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>() ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stoi((string)b.convert_to<string>()) ? a : boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a.convert_to<float>() > stof((string)b.convert_to<string>()) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a.convert_to<string>() > to_string((int)b.convert_to<int>()) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (string)a.convert_to<string>() > to_string((float)b.convert_to<float>()) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert_to<float>() > (int)b.convert_to<int>() ? a : boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() > (float)b.convert_to<float>() ? a : boost::any(b);
    }
    return a; 
}