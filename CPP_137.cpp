#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <locale>

using namespace std;

string replace_comma_with_dot(string s) {
    replace(s.begin(), s.end(), ',', '.');
    return s;
}

boost::any compare_one(boost::any a, boost::any b) {
    try {
        if (a.type() == typeid(int) && b.type() == typeid(int)) {
            int int_a = boost::any_cast<int>(a);
            int int_b = boost::any_cast<int>(b);
            if (int_a == int_b) return "None";
            return int_a > int_b ? a : b;
        } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
            float float_a = boost::any_cast<float>(a);
            float float_b = boost::any_cast<float>(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
            string str_a = boost::any_cast<string>(a);
            string str_b = boost::any_cast<string>(b);
            float float_a = boost::lexical_cast<float>(replace_comma_with_dot(str_a));
            float float_b = boost::lexical_cast<float>(replace_comma_with_dot(str_b));
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else {
            string str_a = a.type() == typeid(string) ? boost::any_cast<string>(a) : boost::lexical_cast<string>(boost::any_cast<int>(a));
            string str_b = b.type() == typeid(string) ? boost::any_cast<string>(b) : boost::lexical_cast<string>(boost::any_cast<int>(b));
            float float_a = boost::lexical_cast<float>(replace_comma_with_dot(str_a));
            float float_b = boost::lexical_cast<float>(replace_comma_with_dot(str_b));
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } catch (const boost::bad_any_cast &) {
        return "None";
    }
}