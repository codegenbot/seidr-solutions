#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? a : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y ? a : b);
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        wstring str1 = boost::any_cast<wstring>(a);
        wstring str2 = boost::any_cast<wstring>(b);
        if (str1 > str2)
            return a;
        else if (str2 > str1)
            return b;
        else
            return boost::any("None");
    } else {
        // If the types are different, convert both to string and compare
        wstring str1 = boost::lexical_cast<wstring>(a);
        wstring str2 = boost::lexical_cast<wstring>(b);
        if (str1 > str2)
            return a;
        else if (str2 > str1)
            return b;
        else
            return boost::any("None");
    }
}