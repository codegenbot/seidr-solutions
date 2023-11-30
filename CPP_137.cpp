#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if (int_a > int_b) {
            return int_a;
        } else if (int_b > int_a) {
            return int_b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if (float_a > float_b) {
            return float_a;
        } else if (float_b > float_a) {
            return float_b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string string_a = boost::any_cast<string>(a);
        string string_b = boost::any_cast<string>(b);
        string_a.erase(remove(string_a.begin(), string_a.end(), ','), string_a.end());
        string_b.erase(remove(string_b.begin(), string_b.end(), ','), string_b.end());
        float float_a = boost::lexical_cast<float>(string_a);
        float float_b = boost::lexical_cast<float>(string_b);
        if (float_a > float_b) {
            return string_a;
        } else if (float_b > float_a) {
            return string_b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_a = boost::any_cast<int>(a);
        string string_b = boost::any_cast<string>(b);
        string_b.erase(remove(string_b.begin(), string_b.end(), ','), string_b.end());
        float float_b = boost::lexical_cast<float>(string_b);
        if (int_a > float_b) {
            return int_a;
        } else if (float_b > int_a) {
            return string_b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string string_a = boost::any_cast<string>(a);
        int int_b = boost::any_cast<int>(b);
        string_a.erase(remove(string_a.begin(), string_a.end(), ','), string_a.end());
        float float_a = boost::lexical_cast<float>(string_a);
        if (float_a > int_b) {
            return string_a;
        } else if (int_b > float_a) {
            return int_b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}