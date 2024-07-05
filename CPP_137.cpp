#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
using namespace std;

boost::any string_to_number(const string& s) {
    string s_copy = s;
    replace(s_copy.begin(), s_copy.end(), ',', '.');
    try {
        return boost::lexical_cast<double>(s_copy);
    } catch (const boost::bad_lexical_cast&) {
        return s; // If conversion fails, return original string
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    auto get_value = [](const boost::any& v) -> boost::any {
        if (v.type() == typeid(int)) return boost::any_cast<int>(v);
        if (v.type() == typeid(float)) return boost::any_cast<float>(v);
        if (v.type() == typeid(double)) return boost::any_cast<double>(v);
        if (v.type() == typeid(string)) return string_to_number(boost::any_cast<string>(v));
        return v;
    };

    auto va = get_value(a);
    auto vb = get_value(b);

    if (va.type() == typeid(double) && vb.type() == typeid(double)) {
        double da = boost::any_cast<double>(va);
        double db = boost::any_cast<double>(vb);
        if (da == db) return "None";
        return da > db ? a : b;
    }

    if (va.type() == typeid(string) && vb.type() == typeid(string)) {
        string sa = boost::any_cast<string>(va);
        string sb = boost::any_cast<string>(vb);
        if (sa == sb) return "None";
        return sa > sb ? a : b;
    }

    return "None";
}