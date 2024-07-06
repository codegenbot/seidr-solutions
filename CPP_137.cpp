#include <boost/any.hpp>
#include <string>
#include <algorithm>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        istringstream iss(str);
        float f;
        iss >> f;
        return f > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return compare_one(b, a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        istringstream iss1(str1), iss2(str2);
        float f1, f2;
        iss1 >> f1; iss2 >> f2;
        return f1 > f2 ? a : (f1 == f2 ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        istringstream iss(str);
        float f;
        iss >> f;
        return f > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return compare_one(b, a);
    }

    return boost::any("None");
}