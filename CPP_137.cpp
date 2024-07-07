#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max(a, b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return max(a, b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (((string)a) > ((string)b))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi((string)b) > (int)a)
            return boost::any(b);
        else if (stoi((string)b) < (int)a)
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (stod((string)b) > (double)a)
            return boost::any(b);
        else if (stod((string)b) < (double)a)
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        if ((int)b > (int)a)
            return boost::any(b);
        else if ((int)b < (int)a)
            return a;
        else
            return boost::any("None");
    }
    else {
        if ((double)a > (double)b)
            return a;
        else if ((double)a < (double)b)
            return b;
        else
            return boost::any("None");
    }
}