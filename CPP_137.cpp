#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::lexical_cast<string>(a.convert_to<int>());
        return (boost::lexical_cast<double>(str) > boost::lexical_cast<double>(b.convert_to<string()))) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = a.convert_to<string>();
        double num = boost::lexical_cast<double>(str);
        if (num > b.convert_to<float>()) return a;
        else if (num < b.convert_to<float>()) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        double num1 = boost::lexical_cast<double>(str1);
        double num2 = boost::lexical_cast<double>(str2);
        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return boost::any("None");
    }
    return a;
}