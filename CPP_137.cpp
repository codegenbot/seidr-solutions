#include <boost/any.hpp>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;
using namespace boost;

bool compare_one(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (x > y)
            return true;
        else
            return false;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        if (x > stod(y))
            return true;
        else
            return false;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        if (stod(x) > y)
            return true;
        else
            return false;
    }
    else 
        return false;
}