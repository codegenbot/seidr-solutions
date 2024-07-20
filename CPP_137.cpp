#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>()) ? a : ((string)a.convert_to<string>() < (string)b.convert_to<string>()) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>()) ? a : ((string)a.convert_to<string>() < (string)b.convert_to<string>()) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a.convert_to<float>() > (string)b.convert_to<string>().erase(0, 1).erase((string)b.convert_to<string())).length()-1) ? a : ((float)a.convert_to<float>() < (string)b.convert_to<string>().erase(0, 1).erase((string)b.convert_to<string()">)).length()-1) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a.convert_to<string>() > to_string((int)b.convert_to<int>())) ? a : ((string)a.convert_to<string>() < to_string((int)b.convert_to<int>())) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (string)a.convert_to<string>() > to_string((float)b.convert_to<float>()).erase(0, 1).erase((string)b.convert_to<string()">)).length()-1) ? a : ((string)a.convert_to<string>() < to_string((float)b.convert_to<float>()).erase(0, 1).erase((string)b.convert_to<string()">)).length()-1) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>()) ? a : ((string)a.convert_to<string>() < (string)b.convert_to<string>()) ? b : boost::any((int)0);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convert_to<float>() > (float)b.convert_to<float>()) ? a : ((float)a.convert_to<float>() < (float)b.convert_to<float>()) ? b : boost::any((int)0);
    }
}