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
        return (max((string)a, (string)b) == (string)a ? "None" : (string)b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>()) == a.convert_to<int>() ? boost::any("None") : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a.convert_to<float>(), (float)b.convert_to<float>()) == (float)a.convert_to<float>() ? boost::any("None") : a;
    }
    else {
        return "None";
    }
}