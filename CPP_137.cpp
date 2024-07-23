#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi(to_string(a.convert_to<int>())) > stof(to_string(b.convert_to<float>())))
            return a;
        else
            return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stof(to_string(b.convert_to<int>())) > stod(to_string(a)))
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(to_string(a)) > tolf(to_string(b)))
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(to_string(b)) > stod(to_string(a)))
            return b;
        else if (stod(to_string(a)) > stod(to_string(b)))
            return a;
        else
            return boost::any("None");
    }
    return max(a, b);
}