#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int num1, num2;
        istringstream iss(str1);
        iss >> num1;

        iss.clear();
        iss.str(str2);
        iss >> num2;

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
        string str = a.convert_to<string>();

        int num;
        istringstream iss(str);
        iss >> num;

        return b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();

        int num;
        istringstream iss(str);
        iss >> num;

        return boost::any("None");
    }

    return boost::any("None");
}