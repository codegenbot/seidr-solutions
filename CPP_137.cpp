#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string(b.convert_to<string>());
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() > b.convert_to<string>())
            return a;
        else if (a.convert_to<string>() < b.convert_to<string>())
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = to_string(a.convert_to<int>());
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = to_string(b.convert_to<int>());
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    return boost::any();
}