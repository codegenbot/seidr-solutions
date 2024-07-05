#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
#include<boost/lexical_cast.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    auto to_double = [](const boost::any& val) -> double {
        if (val.type() == typeid(int)) return boost::any_cast<int>(val);
        if (val.type() == typeid(float)) return boost::any_cast<float>(val);
        if (val.type() == typeid(string)) {
            string str = boost::any_cast<string>(val);
            replace(str.begin(), str.end(), ',', '.');
            return boost::lexical_cast<double>(str);
        }
        return 0.0;
    };

    double val_a = to_double(a);
    double val_b = to_double(b);

    if (val_a == val_b) return "None";
    if (val_a > val_b) return a;
    return b;
}