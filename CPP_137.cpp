#include <boost/config.hpp>
#include <boost/any.hpp>
#include <string>

namespace std {
    string strNone = "None";
}

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(a) > any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a) > any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = any_cast<string>(a);
        string str_b = any_cast<string>(b);

        if (str_a == strNone || str_b == strNone) {
            return "None";
        }

        double num_a = stod(str_a);
        double num_b = stod(str_b);

        return num_a > num_b ? a : b;
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str_a = any_cast<string>(a);
        double num_b = any_cast<double>(b);

        if (str_a == strNone) {
            return "None";
        }

        double num_a = stod(str_a);

        return num_a > num_b ? a : b;
    } else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        double num_a = any_cast<double>(a);
        string str_b = any_cast<string>(b);

        if (str_b == strNone) {
            return "None";
        }

        double num_b = stod(str_b);

        return num_a > num_b ? a : b;
    } else {
        throw invalid_argument("Invalid type");
    }
}