#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)boost::any_cast<int>(a), (float)boost::any_cast<float>(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)boost::any_cast<int>(b), (float)boost::any_cast<float>(a));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}