#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convertible_to<int>(), (double)b.convertible_to<double>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max((double)a.convertible_to<double>(), (int)b.convertible_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convertible_to<string>();
        string str2 = b.convertible_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = a.convertible_to<string>();
        int num;
        double dnum;
        if (str.find(',') != string::npos) {
            size_t pos = str.find(',');
            str.replace(pos, 1, ".");
            num = stoi(str);
        }
        else
            num = stoi(str);
        if (b.type() == typeid(int))
            return max((int)a.convertible_to<int>(), b);
        else
            return max((double)a.convertible_to<double>(), b);
    }
    else {
        // handle other types or throw an exception
        return boost::any("None");
    }
}