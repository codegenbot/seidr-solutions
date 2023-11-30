#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);

        if (num1 > num2) {
            return a;
        } else if (num2 > num1) {
            return b;
        }
    } else if ((a.type() == typeid(float) || a.type() == typeid(string)) && (b.type() == typeid(float) || b.type() == typeid(string))) {
        float num1;
        float num2;

        if (a.type() == typeid(float)) {
            num1 = boost::any_cast<float>(a);
        } else {
            string str1 = boost::any_cast<string>(a);
            str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
            num1 = stof(str1);
        }

        if (b.type() == typeid(float)) {
            num2 = boost::any_cast<float>(b);
        } else {
            string str2 = boost::any_cast<string>(b);
            str2.erase(remove(str2.begin(), str2.end(), ','), str2.end());
            num2 = stof(str2);
        }

        if (num1 > num2) {
            return a;
        } else if (num2 > num1) {
            return b;
        }
    }

    return boost::any("None");
}