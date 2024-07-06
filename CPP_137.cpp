#include "/usr/include/boost/any.hpp"
#include <string>
#include <sstream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b)
            ? a
            : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);

        if (str_a == "None" || str_b == "None") {
            return "None";
        }

        double num_a = stod(str_a);
        double num_b = stod(str_b);

        return num_a > num_b ? a : b;
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        double num_b = boost::any_cast<double>(b);

        if (str_a == "None") {
            return "None";
        }

        double num_a = stod(str_a);

        return num_a > num_b ? a : b;
    } else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        double num_a = boost::any_cast<double>(a);
        string str_b = boost::any_cast<string>(b);

        if (str_b == "None") {
            return "None";
        }

        double num_b = stod(str_b);

        return num_a > num_b ? a : b;
    } else {
        throw invalid_argument("Invalid type");
    }
}