#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a, b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a, b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else {
        // If the types are different, compare the first one to 0 and the second one to 0
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
}