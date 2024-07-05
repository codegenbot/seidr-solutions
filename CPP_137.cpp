#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
#include<boost/lexical_cast.hpp>
using namespace std;

float convert_to_float(boost::any var) {
    if (var.type() == typeid(int)) {
        return boost::any_cast<int>(var);
    } else if (var.type() == typeid(float)) {
        return boost::any_cast<float>(var);
    } else if (var.type() == typeid(string)) {
        string str = boost::any_cast<string>(var);
        replace(str.begin(), str.end(), ',', '.');
        return boost::lexical_cast<float>(str);
    }
    return 0.0;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            int int_a = boost::any_cast<int>(a);
            int int_b = boost::any_cast<int>(b);
            if (int_a == int_b) return "None";
            return int_a > int_b ? a : b;
        } else if (a.type() == typeid(float)) {
            float float_a = boost::any_cast<float>(a);
            float float_b = boost::any_cast<float>(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else if (a.type() == typeid(string)) {
            string str_a = boost::any_cast<string>(a);
            string str_b = boost::any_cast<string>(b);
            float float_a = convert_to_float(a);
            float float_b = convert_to_float(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } else {
        float float_a = convert_to_float(a);
        float float_b = convert_to_float(b);
        if (float_a == float_b) return "None";
        return float_a > float_b ? a : b;
    }
    return "None";
}