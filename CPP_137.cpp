#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greater<int>(int(a.get<int>()), float(b.get<float>())) ? boost::any(b) : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return string(b.get<string>()) > string(a.get<string>()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return greater<float>(float(a.get<float>()), int(b.get<int>())) ? boost::any(b) : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return string(to_string(b.get<int>())) > string(a.get<string>()) ? boost::any(b) : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return greater<float>(float(a.get<float>()), stod(string(b.get<string())))) ? boost::any(b) : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return stod(string(b.get<string()))) > int(a.get<int>()) ? boost::any(b) : a;
    }

    return "None";
}