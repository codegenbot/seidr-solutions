#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>() > to_string(a.convert_to<int())) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (stof(b.convert_to<string>()) > a.convert_to<float())) ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (b.convert_to<int>() > stod(a.convert_to<string()))) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stof(b.convert_to<string>()) > stod(a.convert_to<string()))) ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int())) ? a : ((a.convert_to<int>() < b.convert_to<int())) ? b : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convert_to<float>() > b.convert_to<float())) ? a : ((a.convert_to<float>() < b.convert_to<float())) ? b : boost::any("None"));
    }
    else {
        return "None";
    }
}