Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA.find('.') != string::npos || strA.find(',') != string::npos)
            strA = strA.substr(0, strA.find('.'));
        if (strB.find('.') != string::npos || strB.find(',') != string::npos)
            strB = strB.substr(0, strB.find('.'));

        if (stod(strA) > stod(strB))
            return a;
        else if (stod(strA) < stod(strB))
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);

        if (strB.find('.') != string::npos || strB.find(',') != string::npos)
            strB = strB.substr(0, strB.find('.'));

        if (stod(strB) > numA)
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);

        if (strA.find('.') != string::npos || strA.find(',') != string::npos)
            strA = strA.substr(0, strA.find('.'));

        if (stod(strA) > numB)
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float numA = boost::any_cast<float>(a);
        int numB = boost::any_cast<int>(b);

        if (numA > numB)
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float numA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);

        if (strB.find('.') != string::npos || strB.find(',') != string::npos)
            strB = strB.substr(0, strB.find('.'));

        if (stod(strB) > numA)
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(int) && a.convert_to(b))
        return boost::any("None");

    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;

    return boost::any("None");
}