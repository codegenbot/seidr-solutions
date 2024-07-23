#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max<int>(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return max<double>(boost::any_cast<double>(a), boost::any_cast<double>(b));
    } else if ((a.type() == typeid(string) && (b.type() == typeid(string) ||
                                               b.type() == typeid(int) || b.type() == typeid(float) ||
                                               b.type() == typeid(double)))) {
        string str1 = boost::any_cast<string>(a);
        double num2;
        if (b.type() == typeid(int)) {
            num2 = boost::any_cast<int>(b);
        } else if (b.type() == typeid(float)) {
            num2 = boost::any_cast<float>(b);
        } else {
            num2 = boost::any_cast<double>(b);
        }
        return (num2 > boost::convert(str1, double).get()) ? boost::any(b) : "None";
    } else if ((a.type() == typeid(string) && a.cast<string>().find('.') != string::npos &&
               (b.type() == typeid(string) || b.type() == typeid(int) || b.type() == typeid(float) ||
               b.type() == typeid(double)))) {
        string str1 = boost::any_cast<string>(a);
        double num2;
        if (b.type() == typeid(int)) {
            num2 = boost::any_cast<int>(b);
        } else if (b.type() == typeid(float)) {
            num2 = boost::any_cast<float>(b);
        } else {
            num2 = boost::any_cast<double>(b);
        }
        return (num2 > boost::convert(str1, double).get()) ? boost::any(b) : "None";
    } else if ((a.type() == typeid(string) && a.cast<string>().find(',') != string::npos &&
               (b.type() == typeid(string) || b.type() == typeid(int) || b.type() == typeid(float) ||
               b.type() == typeid(double)))) {
        string str1 = boost::any_cast<string>(a);
        double num2;
        if (b.type() == typeid(int)) {
            num2 = boost::any_cast<int>(b);
        } else if (b.type() == typeid(float)) {
            num2 = boost::any_cast<float>(b);
        } else {
            num2 = boost::any_cast<double>(b);
        }
        return (num2 > stod(str1.erase(0, str1.find(',') + 1))) ? boost::any(b) : "None";
    } else {
        if (a.type() == typeid(string) && b.type() == typeid(int)) {
            int num1 = boost::any_cast<int>(a);
            double num2 = boost::any_cast<double>(b);
            return (num2 > num1) ? boost::any(b) : "None";
        } else if ((a.type() == typeid(string) && a.cast<string>().find('.') != string::npos &&
                   b.type() == typeid(string))) {
            double num1 = boost::convert(a.cast<string>(), double).get();
            return (num2 > num1) ? boost::any(b) : "None";
        } else if ((a.type() == typeid(string) && a.cast<string>().find(',') != string::npos &&
                   b.type() == typeid(string))) {
            double num1 = stod(a.cast<string>().erase(0, a.cast<string>().find(',') + 1));
            return (num2 > num1) ? boost::any(b) : "None";
        } else if ((a.type() == typeid(int) || a.type() == typeid(float) || a.type() == typeid(double)) &&
                   b.type() == typeid(string)) {
            double num1;
            if (a.type() == typeid(int)) {
                num1 = boost::any_cast<int>(a);
            } else if (a.type() == typeid(float)) {
                num1 = boost::any_cast<float>(a);
            } else {
                num1 = boost::any_cast<double>(a);
            }
            return (num2 > num1) ? boost::any(b) : "None";
        } else {
            return "None";
        }
    }
}