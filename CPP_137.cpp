#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (get< float >(a) > get< float >(b)) ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}