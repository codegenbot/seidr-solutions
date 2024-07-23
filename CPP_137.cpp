#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert().get<int>(), (float)b.convert().get<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (a.convert().get<int>() > stoi((string)b.convert().get<string>())) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.get<int>()));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (stoi((string)a.convert().get<string>()) > a.get<int>()) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stoi((string)a.convert().get<string>()) > a.get<float>()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (a.get<int>() > stoi((string)b.convert().get<string>())) ? a : b;
    }
    return boost::any("None");
}