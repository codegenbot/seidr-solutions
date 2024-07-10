#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strA = boost::lexical_cast<string>(a);
        string strB = boost::lexical_cast<string>(b);
        float numA = stof(strA);
        float numB = stof(strB);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::lexical_cast<string>(a);
        float numA = stof(strA);
        int numB = boost::lexical_cast<int>(b);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::lexical_cast<string>(a);
        float numA = stof(strA);
        float numB = boost::lexical_cast<float>(b);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
    else {
        int numA = boost::lexical_cast<int>(a);
        int numB = boost::lexical_cast<int>(b);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
}