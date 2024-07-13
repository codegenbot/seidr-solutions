#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)std::max(get<int>(a), get<int>(b)));
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
             (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any(std::max(get<float>(a), get<float>(b)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::lexical_cast<string>(get<string>(a));
        string str2 = boost::lexical_cast<string>(get<string>(b));

        istringstream iss1(str1);
        double num1;
        iss1 >> num1;

        istringstream iss2(str2);
        double num2;
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
    else {
        return boost::any("None");
    }
}