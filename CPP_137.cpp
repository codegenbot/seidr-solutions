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
        string strA = boost::lexical_cast<string>(a.convert_to<int>());
        string strB = boost::lexical_cast<string>(b);
        if (stod(strA) < stod(strB))
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = a.convert_to<string>();
        string strB = boost::lexical_cast<string>(b.convert_to<int>());
        if (stod(strA) < stod(strB))
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = a;
        string strB = boost::lexical_cast<string>(b.convert_to<float>());
        if (stod(strA) < stod(strB))
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int A = boost::any_cast<int>(a);
        int B = boost::any_cast<int>(b);
        if (A < B)
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float A = boost::any_cast<float>(a);
        float B = boost::any_cast<float>(b);
        if (A < B)
            return a;
        else
            return "None";
    }
    else {
        return "None";
    }
}