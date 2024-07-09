```cpp
#include <boost/variant.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        if (b.type() == typeid(float)) {
            return static_cast<float>(intA) < boost::any_cast<float>(b) ? a : b;
        } else if (b.type() == typeid(double)) {
            return static_cast<double>(intA) < boost::any_cast<double>(b) ? a : b;
        } else if (b.type() == typeid(string)) {
            string strB = boost::any_cast<string>(b);
            return intA < stoi(strB) ? a : b;
        }
    } else if (a.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        if (b.type() == typeid(int)) {
            return fltA > static_cast<float>(boost::any_cast<int>(b)) ? a : b;
        } else if (b.type() == typeid(double)) {
            return fltA < boost::any_cast<double>(b) ? a : b;
        } else if (b.type() == typeid(string)) {
            string strB = boost::any_cast<string>(b);
            return stof(strB) > fltA ? b : a;
        }
    } else if (a.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        if (b.type() == typeid(int)) {
            return dblA > static_cast<double>(boost::any_cast<int>(b)) ? a : b;
        } else if (b.type() == typeid(float)) {
            return dblA < boost::any_cast<float>(b) ? a : b;
        } else if (b.type() == typeid(string)) {
            string strB = boost::any_cast<string>(b);
            return stod(strB) > dblA ? b : a;
        }
    } else if (a.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA < strB ? a : ((strA > strB) ? b : b);
    }
    
    return a;
}