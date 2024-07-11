#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        }
        else if (strA < strB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string strA = boost::any_cast<string>(a);
        float numB = boost::any_cast<float>(b);
        if (strA > to_string(numB)) {
            return a;
        }
        else if (strA < to_string(numB)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        float numA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        if (to_string(numA) > strB) {
            return a;
        }
        else if (to_string(numA) < strB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        throw invalid_argument("Invalid input type");
    }
}