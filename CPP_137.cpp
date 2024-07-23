#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a;
        float a_float = stof(str);
        return max(a_float, stof((string)b));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max)((string)a > (string)b) ? (string)a : (string)b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any((double)a.convert_to<double>() > (double)b.convert_to<double>()) ? a : b;
    }
    else {
        return boost::any("None");
    }
}