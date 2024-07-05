#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    auto parse_real = [](const boost::any& val) -> double {
        if (val.type() == typeid(int)) {
            return boost::any_cast<int>(val);
        } else if (val.type() == typeid(float)) {
            return boost::any_cast<float>(val);
        } else if (val.type() == typeid(string)) {
            string str_val = boost::any_cast<string>(val);
            replace(str_val.begin(), str_val.end(), ',', '.');
            return boost::lexical_cast<double>(str_val);
        }
        throw invalid_argument("Unsupported type");
    };

    double val_a = parse_real(a);
    double val_b = parse_real(b);

    if (val_a == val_b) {
        return "None";
    } else if (val_a > val_b) {
        return a;
    } else {
        return b;
    }
}