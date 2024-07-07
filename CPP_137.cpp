#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.to_ulong(), (float)b.to_double());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        istringstream iss(str);
        float num;
        iss >> num;
        return max(a, boost::any(num));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>())
            return a;
        else if ((string)a.convert_to<string>() < (string)b.convert_to<string>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        istringstream iss(str);
        int num;
        iss >> num;
        if ((int)a.to_ulong() > num)
            return a;
        else if ((int)a.to_ulong() < num)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = (int)a.convert_to<int>();
        if ((string)b.convert_to<string>() > to_string(num))
            return b;
        else if ((string)b.convert_to<string>() < to_string(num))
            return a;
        else
            return boost::any("None");
    }
    else {
        if ((float)a.to_double() > (float)b.to_double())
            return a;
        else if ((float)a.to_double() < (float)b.to_double())
            return b;
        else
            return boost::any("None");
    }
}