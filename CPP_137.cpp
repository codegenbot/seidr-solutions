#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        istringstream iss(str1);
        double num1 = 0.0;
        iss >> num1;

        istringstream iss2(str2);
        double num2 = 0.0;
        iss2 >> num2;

        if (num1 > num2) {
            return a;
        }
        else if (num1 < num2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = any_cast<string>(a);
        istringstream iss(str);
        double num1 = 0.0;
        iss >> num1;

        boost::any b_any = b;
        if (b_any.type() == typeid(int)) {
            int num2 = any_cast<int>(b);
            return (num1 > num2) ? a : b;
        }
        else {
            double num2 = any_cast<double>(b);
            return (num1 > num2) ? a : b;
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        boost::any a_any = a;
        string str = any_cast<string>(b);
        istringstream iss(str);
        double num2 = 0.0;
        iss >> num2;

        if (a_any.type() == typeid(int)) {
            int num1 = any_cast<int>(a);
            return (num1 > num2) ? a : b;
        }
        else {
            double num1 = any_cast<double>(a);
            return (num1 > num2) ? a : b;
        }
    }

    return boost::any("None");
}