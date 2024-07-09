#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convert_to<float>(), stof(b.convert_to<string>().c_str()));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(a.convert_to<string>().c_str()) > stof(b.convert_to<string>().c_str())) ? a : ((stof(a.convert_to<string>().c_str()) < stof(b.convert_to<string>().c_str())) ? b : boost::any("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (stoi(a.convert_to<int>().convert_to<string>()) > stof(b.convert_to<string>().c_str())) ? a : ((stoi(a.convert_to<int>().convert_to<string>()) < stof(b.convert_to<string>().c_str())) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (stof(a.convert_to<string>().c_str()) > stoi(b.convert_to<int>().convert_to<string()))) ? a : ((stof(a.convert_to<string>().c_str()) < stoi(b.convert_to<int>().convert_to<string()))) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (stoi(a.convert_to<int>().convert_to<string>()) > stoi(b.convert_to<int>().convert_to<string()))) ? a : ((stoi(a.convert_to<int>().convert_to<string>()) < stoi(b.convert_to<int>().convert_to<string()))) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    } else {
        return boost::any("None");
    }
}