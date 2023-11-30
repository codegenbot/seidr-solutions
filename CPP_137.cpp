#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(a);
        int numB = boost::any_cast<int>(b);
        if (numA > numB) {
            return numA;
        } else if (numB > numA) {
            return numB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float numA = boost::any_cast<float>(a);
        float numB = boost::any_cast<float>(b);
        if (numA > numB) {
            return numA;
        } else if (numB > numA) {
            return numB;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return strA;
        } else if (strB > strA) {
            return strB;
        }
    }
    return "None";
}