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
        return max((float)a.convert_to<float>(), stof(b.convert_to<string>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)b > a.convert_to<string>() ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max((int)a, (int)b) ? boost::any(a) : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a, (float)b) ? boost::any(a) : boost::any("None");
    }
    else {
        return "None";
    }
}