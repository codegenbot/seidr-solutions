#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA == "None" || strB == "None") {
            return a;
        }

        float numA = stof(strA);
        float numB = stof(strB);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);

        float numB = stof(strB);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);

        float numA = stof(strA);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }

    return boost::any("None");
}