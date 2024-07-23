#include <boost/lexical_cast.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::lexical_cast<string>(b);
        int i = boost::any_cast<int>(a);
        return a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::lexical_cast<string>(b);
        float f = boost::any_cast<float>(a);
        if(f > stod(str))
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(b);
        string str = boost::lexical_cast<string>(a);
        if(stod(str) > i)
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(b);
        string str = boost::lexical_cast<string>(a);
        if(stod(str) > f)
            return a;
        else
            return b;
    } else {
        // If both are strings, compare them.
        string str1 = boost::lexical_cast<string>(a);
        string str2 = boost::lexical_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return a;
    }
}