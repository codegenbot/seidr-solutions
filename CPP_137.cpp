#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return max((float)a.convert_to<float>(), (double)b.convert_to<double>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = a.convert_to<string>();
        string sb = b.convert_to<string>();
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string)) {
        string s = a.convert_to<string>();
        try {
            float f = stof(s);
            return b > f ? b : a;
        } catch (...) {
            return "None";
        }
    }
    else {
        return b > a ? b : a;
    }
}